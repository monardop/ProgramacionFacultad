#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 20

int esPalindromo(char p1[], char p2[]);

int main()
{
    char palabraUno[SIZE], palabraDos[SIZE];
    printf("Insertar primer palabra: ");
    fgets(palabraUno, SIZE, stdin);
    printf("Insertar segunda palabra: ");
    fgets(palabraDos, SIZE, stdin);

    if (esPalindromo(palabraUno, palabraDos))
    {
        printf("Es palindromo.\n");
    }
    else
    {
        printf("No es palindromo.\n");
    }

    return 0;
}

void lowerString(char p[])
{
    for (; *p; ++p) *p = tolower(*p);
}

int esPalindromo(char p1[], char p2[])
{

    if (strcmpi(p1, p2) == 0 || strlen(p1) != strlen(p2))
    {
        return 0;
    }

    lowerString(p1);
    lowerString(p2);
    
    int i = 0, p1Letra, p2Letra;
    char letraBuscada;
    while (p1[i] != '\0')
    {
        letraBuscada = p1[i];
        p1Letra = 0, p2Letra = 0;
        for (size_t x = 0; x < strlen(p1); x++)
        {
            if (p1[x] == letraBuscada)
                p1Letra++;
            if (p2[x] == letraBuscada)
                p2Letra++;
        }
        if (p1Letra != p2Letra)
            return 0;
        i++;
    }
    return 1;
}