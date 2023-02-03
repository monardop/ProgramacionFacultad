/*
Desarrollar una funcion que devuelva el factorial de un entero
*/
#include <stdio.h>

int factorialRecursivo(int x);
double factorialWhile(int x);
double factorialFor(int x);

int main()
{

    printf("Funcion recursiva: 5! = %d, 10! = %d \n",
           factorialRecursivo(5), factorialRecursivo(10));
    printf("Funcion while: 5! = %.f, 10! = %.f \n",
           factorialWhile(5), factorialWhile(10));
    printf("Funcion for: 5! = %.f, 10! = %.f \n",
           factorialFor(5), factorialFor(10));

    system("pause");
    return 0;
}

int factorialRecursivo(int x)
{
    if(x == 1)
    {
        return 1;
    }
    return  x * factorialRecursivo(x-1);

}

double factorialWhile(int x)
{
    double fact = 1;
    while(x > 1)
    {
        fact *= x;
        x--;
    }
    return fact;
}

double factorialFor(int x)
{
    double fact = 1;
    for(x; x > 1; x--)
    {
        fact *= x;
    }
    return fact;
}
