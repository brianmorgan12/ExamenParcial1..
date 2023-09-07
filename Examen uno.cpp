#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Dame un que numero entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

  
    while (numero > 0) {
        suma += numero % 10; 
        numero /= 10;         
    }

    printf("El resultado de los digitos es: %d\n", suma);
    printf("Le dije que si pidia ;)\n");
 
    return 0;
}
//Este programa es para que pueda sumar los digitos del número que se le de
