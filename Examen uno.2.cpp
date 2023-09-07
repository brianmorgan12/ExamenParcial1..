#include <stdio.h>

int main() {
    int numero, a;

    printf("Pon el numero del cual quieres los siguientes 10: ");
    scanf("%d", &numero);

    printf("Los 10 numeros siguientes son:\n");

    a = numero + 1;
    while (a <= numero + 10)
	 {
        printf("%d\n", a);
        a++;
    }

    printf("igual chueque con los dedos si esta bien...solo para confirmar");
    return 0;
}

//Este programa te da los 10 numeros sucesivos de una cantidad 
