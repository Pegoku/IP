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

    char nom[64], llinatge1[64], llinatge2[64], direcció[128], dni[16];
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

    printf("Nombre de client: %d", numClients);
    printf("Nom: %s\n", nom);
    printf("Llinatges: %s %s\n", llinatge1, llinatge2);
    printf("Direcció: %s\n", direcció);
    printf("DNI: %s\n", dni);
    printf("Nombre de telefón: %s\n", tel);
    // clients[numClients] =
    numClients++;
}

void modCl(int n)
{
}

void delCl(int n)
{
}

void viewCl(int n)
{
}

int main()
{
    createCl();
}