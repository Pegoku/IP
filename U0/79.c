#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

#define DEV

typedef struct client
{

    char nom[64], llinatge1[64], llinatge2[64], direcció[128], dni[16];
    int tel;

} CLIENT;

CLIENT clients[256] = {};
int numClients = 0, emptyClients = 0;
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

int isDisabled(int clientId){
    for (int i = 0; i<emptyClients; i++){
        if (unClients[i] == clientId) return 1;
    }
    return 0;
}
void countClients(){
    // for (int i = 0; i<256; i++){
    //     if (strcmp(clients[i].nom, "")) numClients++;
    // }
    printf("%d",numClients);
}

void shiftUnclients(){
    for (int i = 0; i<256; i++){
        unClients[i] = unClients[i+1];
    }
}

char getInput(){
    char a;
    a = getchar();
    #ifdef DEV
    // printf("char: %d", a);
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
    int nc;
    int reclient=0;
    if(unClients[0]){
        nc = unClients[0];
        numClients--;
        reclient=1;
        shiftUnclients();
    } else nc = numClients;

    printf("Nom: ");
    scanf("%s", nom);

    printf("Llinatge1: ");
    scanf("%s", llinatge1);
    printf("Llinatge2: ");
    scanf("%s", llinatge2);
    getchar(); // consume newline

    printf("Direcció: ");
    fgets(direcció, 128, stdin);
    strtok(direcció, "\n");

    printf("DNI: ");
    scanf("%s", dni);

    printf("Nombre de telefón: ");
    scanf("%d", &tel);

    clr();

    printf("Nombre de client: %d\n", nc);
    printf("Nom: %s\n", nom);
    printf("Llinatges: %s %s\n", llinatge1, llinatge2);
    printf("Direcció: %s\n", direcció);
    printf("DNI: %s\n", dni);
    printf("Nombre de telefón: %d\n", tel);


    printf("Son aquests valors correctes? (Y/n): ");
    scanf("%c", &ch);

    clearN();
    if (ch == 'n') return;

    strcpy(clients[nc].direcció, direcció);
    strcpy(clients[nc].dni, dni);
    strcpy(clients[nc].llinatge1, llinatge1);
    strcpy(clients[nc].llinatge2, llinatge2);
    strcpy(clients[nc].nom, nom);
    clients[nc].tel = tel;

    if (!reclient) numClients++;
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
    
    char nom[64], llinatge1[64], llinatge2[64], direcció[128], dni[16], ch;
    char buffer[64];
    int tel;

    if (isDisabled(n) || n>=numClients){
        printf("Client no existeix.\n");
        delay(2000);
        return;
    }

    printf("Nom (%s): ", clients[n].nom);
    fgets(nom, 64, stdin);
    strtok(nom, "\n");
    if (strlen(nom) == 1) strcpy(nom, clients[n].nom);

    printf("Llinatge1 (%s): ", clients[n].llinatge1);
    fgets(llinatge1, 64, stdin);
    strtok(llinatge1, "\n");
    if (strlen(llinatge1) == 1) strcpy(llinatge1, clients[n].llinatge1);
    
    printf("Llinatge2 (%s): ", clients[n].llinatge2);
    fgets(llinatge2, 64, stdin);
    strtok(llinatge2, "\n");
    if (strlen(llinatge2) == 1) strcpy(llinatge2, clients[n].llinatge2);

    printf("Direcció (%s): ", clients[n].direcció);
    fgets(direcció, 128, stdin);
    strtok(direcció, "\n");
    if (strlen(direcció) == 1) strcpy(direcció, clients[n].direcció);

    printf("DNI (%s): ", clients[n].dni);
    fgets(dni, 16, stdin);
    strtok(dni, "\n");
    if (strlen(dni) == 1) strcpy(dni, clients[n].dni);

    printf("Nombre de telefón (%d): ", clients[n].tel);
    fgets(buffer, 64, stdin);
    if (strlen(buffer) > 1) tel = atoi(buffer);
    else tel = clients[n].tel;

    clr();

    printf("Nombre de client: %d\n", n);
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
    printf("Nom: %s\n", clients[n].nom);
    printf("Llinatges: %s %s\n", clients[n].llinatge1, clients[n].llinatge2);
    printf("Direcció: %s\n", clients[n].direcció);
    printf("DNI: %s\n", clients[n].dni);
    printf("Nombre de telefón: %d\n", clients[n].tel);
    


}

void delCl(int n)
{

    if (isDisabled(n) || n>=numClients){
        printf("Client no existeix.\n");
        delay(2000);
        return;
    }
    char c = 0;
    printf("Segur que vols eliminar el client n.%d (%s %s, %s) (y/N) ", n, clients[n].llinatge1, clients[n].llinatge2, clients[n].nom);
    scanf("%c", &c);
    clearN();
    if (c != 'y' && c != 'Y') return;

    unClients[emptyClients] = n;
    emptyClients++;
    printf("Client eliminat correctament.\n");
    delay(2000);
    
}

void viewCl(int n)
{
    if (isDisabled(n) || n>=numClients){
        printf("Client no existeix.\n");
        delay(2000);
        return;
    }
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
    int nc = 0;
    printf("Hola"); 
    printf("%d", numClients);
    if (numClients == 0) {noCl(); return;}
    for (int i = 0; i<numClients; i++){
        if (i>0 && i%10==0){
            printf("Mostrant %d-%d/%d (%d) (N)ext (p)revious (q)uit\n",i-10, i-1, numClients-1, nc);
            nc = 0;
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
        if (!isDisabled(i)) {
        // if(1){
            nc++;
            printf("Client n. %d: %s %s, %s\n", i, clients[i].llinatge1, clients[i].llinatge2, clients[i].nom);
        }
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

void importCl(){
    FILE * fptr;
    if((fptr = fopen("clients.txt", "r"))==NULL) return;
    fread(clients, sizeof(clients), 256, fptr);
    fclose(fptr);
    countClients();

}
void exportCl(){
    FILE * fptr = fopen("clients.txt", "w");
    fwrite(clients, sizeof(clients), 256, fptr);
    fclose(fptr);
}



int main()
{
    int op = 0;
    int n;

    importCl();

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
            printf("Hola2");
            listCl(); 
            break;
        case 3:
            clr();
            printf("Nombre del client a detallar: ");
            scanf("%d", &n);
            clearN();
            viewCl(n);
            break;
        case 4:
            clr();
            printf("Nombre del client a modificar: ");
            scanf("%d", &n);
            clearN();
            modCl(n);
            break;
        case 5:
            clr();
            printf("Nombre del client a eliminar: ");
            scanf("%d", &n);
            clearN();
            delCl(n);
            break;
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
    exportCl();

}

//Nombre de client: 50
// Nom: 

// Llinatges: pons 

// Direcció: 

// DNI: 969658547A
// Nombre de telefón: 616253422
// Son aquests valors correctes? (Y/n): 