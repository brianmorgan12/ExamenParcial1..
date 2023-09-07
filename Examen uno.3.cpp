#include <stdio.h> 

int main() {
    int A;  
    double suma = 0.0;  
    int contador = 0;  
    
    printf("Dame la cantidad de numeros que quieres sumar: ");
    scanf("%d", &A); 
    
    while (contador < A)
	 {
        double numero; 
        printf("Introduce el numero %d:", contador + 1);
        scanf("%lf", &numero);

        suma += numero; 
        contador++;  
    }

    printf("El resultado de la suma de los %d numeros es: %lf\n", A, suma);

    return 0;
}
//Este programa es para programa es para sumar N números enteros.
