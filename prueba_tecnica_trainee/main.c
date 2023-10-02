#include <stdio.h>
#include <stdlib.h>

//crear un sistema de reserva de asientos para un anfiteatro de 10 filas x 10 asientos, el usuario tiene que ver el "mapa" de estos asientos

void iniciarMatriz(char mat[][11]);
void mostrarMatriz(char mat[][11]);
int verificarLugar(char mat[][11],int fila,int col);
void reservarLugar(char mat[][11],int fila,int col);

int main()
{
    char matriz[11][11];
    int fila=0,columna=0;
    char op;
    iniciarMatriz(matriz);
    do
    {
        mostrarMatriz(matriz);
        do
        {
            printf("Que fila quiere: ");
            scanf("%i",&fila);
            printf("Que columna quiere: ");
            scanf("%i",&columna);

        }
        while(verificarLugar(matriz,fila,columna));

        reservarLugar(matriz,fila,columna);
        mostrarMatriz(matriz);
        printf("Desea seguir reservando asientos? s/n: ");
        fflush(stdin);
        scanf("%c",&op);
        system("cls");
    }
    while(op=='S' || op=='s');
    return 0;
}

void iniciarMatriz(char mat[][11])
{
    for(int i=1; i < 11; i++)
    {
        for(int j=1; j < 11; j++)
        {
            mat[i][j]='L';
        }
    }

}

void mostrarMatriz(char mat[][11])
{
    puts("-----------ASIENTOS-----------\n");
    for(int i=1; i < 11; i++)
    {
        for(int j=1; j < 11; j++)
        {
            printf(" %c ",mat[i][j]);
        }
        printf("\n");
    }
}

int verificarLugar(char mat[][11],int fila,int col)
{
    int flag=0;
    if(fila <11 && col <11)
    {
        if(mat[fila][col] == 'X')
        {
        puts("Lugar ya reservado intente con otro");
        flag=1;
        }


    }
    else
    {
        puts("Lugar invalido, intente de nuevo");
    }
    return flag;
}

void reservarLugar(char mat[][11],int fila,int col)
{
    mat[fila][col]='X';
}
