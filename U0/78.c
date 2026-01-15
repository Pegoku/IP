#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define DEV

typedef struct client
{

    char nom[64], llinatge1[64], llinatge2[64], direcció[128], dni[16];
    int tel;

} CLIENT;

CLIENT clients[256] = {};
int numClients = 0;
int unClients[256] = {};

void clr()
{
    for (int i = 0; i < 1; i++)
    {
        printf("\n");
    }
}

void delay(int ms){
    clock_t start_time = clock();

    while (clock() < start_time + ms * CLOCKS_PER_SEC / 1000)
        ;
}

char getInput(){
    char a;
    a = getchar();
    #ifdef DEV
    printf("char: %d", a);
    #endif
    // Only consume rest of line if a != \n
    if (a != '\n') {
        while ((getchar()) != '\n');
    }
    return a;
}

void clearN(){
    while ((getchar()) != '\n');
}

void createCl()
{

    char nom[64], llinatge1[64], llinatge2[64], direcció[128], dni[16], ch;
    int tel;

    printf("Nom: ");
    scanf("%s", nom);

    printf("Llinatges: ");
    scanf("%s %s", llinatge1, llinatge2);
    getchar(); // consume newline

    printf("Direcció: ");
    fgets(direcció, 128, stdin);
    strtok(direcció, "\n");

    printf("DNI: ");
    scanf("%s", dni);

    printf("Nombre de telefón: ");
    scanf("%d", &tel);

    clr();

    printf("Nombre de client: %d\n", numClients);
    printf("Nom: %s\n", nom);
    printf("Llinatges: %s %s\n", llinatge1, llinatge2);
    printf("Direcció: %s\n", direcció);
    printf("DNI: %s\n", dni);
    printf("Nombre de telefón: %d\n", tel);


    printf("Son aquests valors correctes? (Y/n): ");
    scanf("%c", &ch);

    clearN();
    if (ch == 'n') return;

    strcpy(clients[numClients].direcció, direcció);
    strcpy(clients[numClients].dni, dni);
    strcpy(clients[numClients].llinatge1, llinatge1);
    strcpy(clients[numClients].llinatge2, llinatge2);
    strcpy(clients[numClients].nom, nom);
    clients[numClients].tel = tel;

    numClients++;
}

void noCl(){
    char ch;
    printf("No hi ha clients en el sistema, vols crear-ne un? (y/N) ");
    scanf("%c", &ch);
    clearN();
    if (ch == 'y' || ch == 'Y') createCl(); 
    else clr();
}

void modCl(int n)
{
}

void delCl(int n)
{
}

void viewCl(int n)
{
    char ch;
    // printf("Nombre de client: %d\n", n);
    printf("Nom: %s\n", clients[n].nom);
    printf("Llinatges: %s %s\n", clients[n].llinatge1, clients[n].llinatge2);
    printf("Direcció: %s\n", clients[n].direcció);
    printf("DNI: %s\n", clients[n].dni);
    printf("Nombre de telefón: %d\n", clients[n].tel);


    printf("Son aquests valors correctes? (Y/n): ");
    ch = getInput();
    if (ch != 'n') return;
    modCl(n);
}

void listCl(){
    char c;
    // printf("%d", numClients);
    if (numClients == 0) {noCl(); return;}
    for (int i = 0; i<numClients; i++){
        if (i>0 && i%10==0){
            printf("Mostrant %d-%d/%d (10) (N)ext (p)revious (q)uit\n",i-10, i-1, numClients-1);

            c = getInput();
            // printf("%c", c);
            switch (tolower(c))
            {
            case '\n':
            case 'n':
                clr();
                break;
            case 'p':
                if (i<19) {
                    printf("No es pot anar enrera, continuant\n"); 
                    delay(1000);
                } else {
                    i = i-20;
                }
                clr();
                break;
            case 'q':
                return;
                break;
            default:
                printf("Opció incorrecte, continuant\n");
                delay(1000);
                break;
            }
        }
        printf("Client n. %d: %s %s, %s\n", i, clients[i].llinatge1, clients[i].llinatge2, clients[i].nom);
    }
    
    printf("Tots els usuaris actius mostrats, Tornar a començar? (y/N): ");
    c = getInput();
    if (tolower(c) != 'y') return;
    listCl();
}

void populateCl(int n){
    for (int i = 0; i<n; i++){

    sprintf(clients[numClients].direcció, "Carrer%d", 27*i+9);
    sprintf(clients[numClients].dni, "%dF", 31*i+5);
    sprintf(clients[numClients].llinatge1, "Pons%d", 23*i+7);
    sprintf(clients[numClients].llinatge2, "Mer%d", 21*i+3);
    sprintf(clients[numClients].nom, "Marc%d", 29*i+9);
    clients[numClients].tel = 17*i;

    numClients++;
    }

    printf("Populated %d clients", numClients);
}

int main()
{
    int op = 0;
    int n;

    while (op != 6){
        clr();
        printf("Tria una opció: \n");
        printf(" (1) Crear usuari\n");
        printf(" (2) Llista usuaris\n");
        printf(" (3) Detall usuari\n");
        printf(" (4) Modificar usuari\n");
        printf(" (5) Eliminar usuari\n");
        printf(" (6) Sortir\n");
        #ifdef DEV
        printf(" (9) Populate (DEV)\n");
        #endif

        scanf("%d", &op);
        clearN();
        switch (op)
        {
        case 1:
            clr();
            createCl();
            break;
        
        case 2:
            clr();
            listCl(); 
            break;
        case 3:
            clr();
            printf("Nombre del client a detallar: ");
            scanf("%d", &n);
            viewCl(n);
            break;
        case 4:
            clr();
            break;
        case 5:
            clr();
            break;
        case 6:
            printf("Exiting...");
            break;
        #ifdef DEV
        case 9:
            scanf("%d", &n);
            populateCl(n);
            break;
        #endif
        default:
            printf("Opció no vàlida.");
            break;
        }



    }
    // createCl();

}