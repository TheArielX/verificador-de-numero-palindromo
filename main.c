#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("Introduzca el n%cmero: ", 163);
    scanf("%d", &z);
    while (x>=100000) {
        printf("El numero no puede ser mayor de 5 digitos\nIntente de nuevo\n");
            printf("Introduzca el numero: ");
            scanf("%d", &z);
    }

    if (z>=0 && z<=99) {
        x = z%10;
        y = z/10;

        if(x==y)
            printf("El numero %d es palindromo", z);
               else
                    printf("El numero %d no es palindromo", z);
    }

    if (z>=100 && z<=665 && z>=667 && z<=999) {
        x = z%10;
        y = z/100;

            if (x==y)
                printf("El numero %d es palindromo", z);
                    else
                        printf("El numero %d no es palindromo", z);
    }

    if (z>=1000 && z<=9999) {
        x = z%10;
        y = z/1000;

        if (x==y)
            printf("El numero %d es palindromo", z);
            else
                printf("El numero %d no es palindromo", z);
    }

    if (z>=10000 && z<=99999) {
        x = z%10;
        y = z/10000;

        if (x==y)
            printf("El numero %d es palindromo", z);
            else
                printf("El numero %d no es palindromo", z);
    }

    if (z==666) {
            printf("%cY pa%c que tu quieres saber eso? %cRECOGE TU MALETA SATANA%c Y VETE YA!", 168, 239, 173, 239);
    }
}
