#include <stdio.h>
#include <stdlib.h>

void escalera(int num);

int main()
{
    puts("ENTRADA POSITIVA (input 6):");
    escalera(6);
    puts("\nENTRADA NULA (input 0):");
    escalera(0);
    puts("\nENTRADA NEGATIVA (input -4):");
    escalera(-4);
    return 0;
}



void escalera(int num)
{
    int espacio=0;
    if(num == 0)
    {
        printf("__");
    }
    else if(num < 0)
    {
        int mod=num*-1;
        printf("_\n");
        for(int i=0; i<mod;i++)
        {
            for(int i=0; i < espacio; i++)
            {
                printf("  ");
            }
            printf(" |_\n");
            espacio++;
        }

    }
    else //numero > 0
    {
        espacio=num*2;

        for(int i=0; i < espacio; i++)
        {
            printf(" ");
        }
        printf("_\n");
        espacio-=2;

        for(int i=0; i < num; i++)
        {
            for(int i=0; i < espacio; i++)
            {
                printf(" ");
            }
            printf("_|\n");

            espacio-=2;

        }
    }
}
