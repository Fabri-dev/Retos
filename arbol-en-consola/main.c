#include <stdio.h>
#include <stdlib.h>

void arbol(int copas);
void tronco();
void triangulo(int flag);

int main()
{
    printf("Prueba 1: \n\n");
    arbol(5);
    printf("Prueba 2: \n\n");
    arbol(0);
    printf("Prueba 3: \n\n");
    arbol(-3);

    return 0;
}


void arbol(int copas)
{

    if(copas > 0)
    {
        for(int i=0; i < copas; i++)
        {
            triangulo(0);
        }

        tronco();
    }
    else if(copas == 0)
    {
        tronco();
    }
    else
    {
        int mod=copas*-1;
        tronco();
        for(int i=0; i<mod;i++)
        {

        triangulo(-1);
        }
    }




}
void tronco()
{
    int madera=19;
    for(int j=0; j < 4; j++)
    {

        for (int i=0; i < madera; i++)
        {
            printf(" ");
        }
        printf("###\n");

    }
}

void triangulo(int flag)
{
    int lineas=5;
    int espacio=20;
    int hojas=1;

    if(flag==0)
    {

        for(int i=0; i<lineas; i++)
        {
            for(int j=0; j < espacio; j++)
            {
                printf(" ");

            }
            for(int k=0; k < hojas; k++)
            {

                printf("@ ");
            }
            printf("\n");
            hojas++;
            espacio--;

        }
    }
    else
    {
        espacio-=lineas-1;
        hojas=5;
        for(int i=0; i<lineas; i++)
        {
            for(int j=0; j < espacio; j++)
            {
                printf(" ");

            }
            for(int k=0; k < hojas; k++)
            {

                printf("@ ");
            }
            printf("\n");
            hojas--;
            espacio++;
        }

    }


}
