#include <stdio.h>
#include <string.h>

struct dades
{
    char grup[40];
    int aula, numAlumnes;
};

void printData(struct dades data)
{
    printf("Grup: %s, Aula: %d, Alumnes: %d\n", data.grup, data.aula, data.numAlumnes);
}

int main()
{
    struct dades data[2];
    data[0].aula = 2;
    data[0].numAlumnes = 30;
    strcpy(data[0].grup, "SMX1");

    data[1].aula = 2;
    data[1].numAlumnes = 26;
    strcpy(data[1].grup, "SMX2");

    for (int i = 0; i < 2; i++)
    {
        printData(data[i]);
    }

    return 0;
}