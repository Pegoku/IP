#include <stdio.h>
#include <string.h>

typedef struct client
{

    char nom[64], llinatge1[64], llinatge2[64], direcció[128], dni[16];
    int tel;

} CLIENT;

CLIENT clients[256];
int numClients = 0;

void clear()
{
    for (int i = 0; i < 100; i++)
    {
        printf("\n");
    }
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

    printf("Nomre de telefón: ");
    scanf("%d", &tel);

    clear();

    printf("Nombre de client: %d\n", numClients);
    printf("Nom: %s\n", nom);
    printf("Llinatges: %s %s\n", llinatge1, llinatge2);
    printf("Direcció: %s\n", direcció);
    printf("DNI: %s\n", dni);
    printf("Nombre de telefón: %d\n", tel);

    getchar();

    printf("Son aquests valors correctes? (Y/n): ");
    scanf("%c", &ch);
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
    if (ch == 'y' || ch == 'Y') createCl(); 
    else clear();
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
    printf("Nombre de client: %d", n);
    printf("Nom: %s\n", clients[n].nom);
    printf("Llinatges: %s %s\n", clients[n].llinatge1, clients[n].llinatge2);
    printf("Direcció: %s\n", clients[n].direcció);
    printf("DNI: %s\n", clients[n].dni);
    printf("Nombre de telefón: %s\n", clients[n].tel);

    printf("Son aquests valors correctes? (Y/n): ");
    scanf("%c", &ch);
    if (ch == 'n') return;
}

void listCl(){
    printf("%d", numClients);
    if (numClients == 0) noCl(); return;
    for (int i = 0; i<numClients; i++){
        printf("Client n. %d: %s %s, %s\n", i, clients[i].llinatge1, clients[i].llinatge2, clients[i].nom);
    }
}


int main()
{
    int op = 0;

    while (op != 6){
        printf("Tria una opció: \n");
        printf(" (1) Crear usuari\n");
        printf(" (2) Llista usuaris\n");
        printf(" (3) Detall usuari\n");
        printf(" (4) Modificar usuari\n");
        printf(" (5) Eliminar usuari\n");
        printf(" (6) Sortir\n");
        scanf("%d", &op);
        getchar();
        
        switch (op)
        {
        case 1:
            clear();
            createCl();
            break;
        
        case 2:
            clear();
            listCl(); 
            break;
        case 3:
            clear();
            break;
        case 4:
            clear();
            break;
        case 5:
            clear();
            break;
        case 6:
            printf("Exiting...");
            break;
        default:
            printf("Opció no vàlida.");
            break;
        }



    }
    createCl();

}