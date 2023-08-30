#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//

///Dado un array de letras (ordenadas siempre de menor a mayor) debes devolver sólo la letra que falta en el array.


char buscarLetraFaltante(char arr[],int validos);

int main()
{

    char faltante;

    char arr1[]={'a','b','c','e','f','g'};//d
    int validos1=6;

    char arr2[]={'O','Q','R','S'};//P
    int validos2=4;

    char arr3[]={'X','Z'};
    int validos3=2;

    faltante= buscarLetraFaltante(arr1,validos1);
    printf("Letra faltante: %c\n",faltante);

    faltante= buscarLetraFaltante(arr2,validos2);
    printf("Letra faltante: %c\n",faltante);

    faltante= buscarLetraFaltante(arr3,validos3);
    printf("Letra faltante: %c\n",faltante);
    return 0;
}

char buscarLetraFaltante(char arr[],int validos)
{
    char faltante;
    int dato=0,flag=0,i=0;
    while(i<validos && flag==0)
    {
        dato = arr[i+1]-arr[i];

        if(dato == 2)
        {
            flag=1;
            faltante= arr[i]+1;
        }
        i++;
    }


    return faltante;
}
