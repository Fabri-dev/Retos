#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarArreglo(char arr[],int val);
void cuandoAbreElComercial(char *semana[],char *apertura[],int validosSemana);


int main()
{

    //test 1

    char *arr1[]={"Domingo","Lunes","Viernes","Sabado","Jueves"};
    int val1=5;
    char *ap1[]={"Martes","Jueves"};
    cuandoAbreElComercial(arr1,ap1,val1);


    //test 2
    char *arr2[]={"Lunes", "Martes", "Jueves", "Viernes", "Domingo", "Miercoles"};
    int val2=6;
    char *ap2[]={"Martes","Martes"};
    cuandoAbreElComercial(arr2,ap2,val2);


    return 0;
}



void cuandoAbreElComercial(char *semana[],char *apertura[],int validosSemana)
{
    int j=0;
        printf("Salida: [");
    for(int i=0; i < validosSemana; i++)
    {
        if((strcmpi(semana[i],apertura[0])==0) || (strcmpi(semana[i],apertura[1])==0))
        {

            printf(" si ");

        }
        else
        {
            printf(" no ");

        }

    }
    printf("]");

}
