#include <stdio.h>
#include <string.h>
#include <ctype.h>

char codeToChar(int code)
{
    return code + 64;
}

void codeStr(char strIn[128], int code)
{
    char strOut[128];
    int offset = 0;

    for (int i = 0; i < strlen(strIn); i++)
    {
        char cIn = toupper(strIn[i]);
        // printf("%c", cIn);
        if ((cIn + code )> 90)
        {
            offset = 26; 
        }
        // else{
        //     // printf("%d %d %c", strIn[i], (strIn[i] - code ), (strIn[i] - code ));
        //     offset = 0;
        // }
        strOut[i] = cIn + code - offset;
    }
    // for (int i = 0; i < strlen(strIn); i++)
    // {
        
    //     strOut[i] = strIn[i] + code;
    // }

    strOut[strlen(strIn)] = '\0';
    printf("%s\n", strOut);
}

void decodeStr(char strIn[128], int code)
{
    char strOut[128];
    int offset = 0;

    for (int i = 0; i < strlen(strIn); i++)
    {
        char cIn = toupper(strIn[i]);
        if ((cIn - code )< 65)
        {
            offset = 26; 
        }
        // else{
        //     // printf("%d %d %c", strIn[i], (strIn[i] - code ), (strIn[i] - code ));
        //     offset = 0;
        // }
        strOut[i] = cIn - code + offset;
    }

    strOut[strlen(strIn)] = '\0';
    printf("%s\n", strOut);
}

int main()
{
    char choice, strIn[128];
    int code = 0, cont = 1;

    while (cont == 1)
    {
        printf("Tria una opcció:\n\
    a) Introduir el codi de xifrat\n\
    b) veure el codi\n\
    c) xifrar una frase\n\
    d) desxifrar una frase\n\
    s) Sortir\n");

        scanf(" %c", &choice);
        switch (choice)
        {
        case 'a':
        
        printf("Introdueix el codi (entre 0 i 26): ");
        scanf("%d", &code);

        while(!(code <=26 && code >= 0)){
            printf("Introdueix el codi (entre 0 i 26): ");
            scanf("%d", &code);
        }
            break;
        case 'b':
            printf("Codi: %d\n", code);
            break;
        case 'c':
            printf("Introdueix la frase a xifrar: ");
            scanf("%s", &strIn);
            
            codeStr(strIn,code);
            break;
        case 'd':
            printf("Introdueix la frase a desxifrar: ");
            scanf("%s", &strIn);
            decodeStr(strIn,code);
            break;
        case 's':
            cont = 0;
            break;
 
        default:
            break;
        }
    }

    return 0;
}