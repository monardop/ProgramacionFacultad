#include <stdio.h>
#include <string.h>
#include <ctype.h>

int valorPalabra(const char palabra[]);


int main()
{
    char palabra[20];
    printf("Insertar palabra: ");
    fgets(palabra, 20, stdin);
    
    printf("El valor de su palabra segun ASCII es: %d", valorPalabra(palabra));
    return 0;
}

int valorIndividual(char letra)
{
    const char asciiChar[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    const int valorLetra[] = {97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122, 48,49,50,51,52,53,54,55,56,57};
    int valor = 0;
    letra = tolower(letra);
    for(int i = 0; i < 35; i++)
    {
        if(letra == asciiChar[i])
            return valorLetra[i];
    }
    return valor;
}

int valorPalabra(const char palabra[])
{
    int suma = 0, i = 0;
    while(palabra[i] != '\0')
    {
        suma += valorIndividual(palabra[i]);
        i++;
    }
    return suma;
}