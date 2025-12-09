#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int voc = 0, nvoc = 0;
    char w[50];

    printf("Introdueix una paraula:\n")
    ;

    scanf("%s", w);

    for (int i = 0; i<strlen(w); i++)
{
    switch (w[i])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        voc++;
        break;
    
    default:
        nvoc++;
        break;
    }
}
if (voc > nvoc){
    printf("Hi ha mes vocals");
}

if (voc < nvoc){
    printf("Hi ha mes consonants");
}
if (voc == nvoc){
    printf("Hi ha el mateix nombre de vocals que consonants");
}


}