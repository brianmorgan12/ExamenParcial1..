 #include <math.h>
 #include <stdio.h>

int main() 
{
    char continuar = 'a';  

    while (continuar == 'a' || continuar == 'a') 
    {
        int numero;  

        printf("Dame un numero para poder darte su tabla de multiplicar :)");
        scanf("%d" , &numero); 

        printf("la tabla de multiplicar de %d:\n", numero);

        int i = 1;
        while (i <= 10)
		 {
          int resultado = numero * i;  
          printf("%d x %d = %d\n", numero, i, resultado);  
          i++;
         }
    }

    return 0; 
}
//Este algoritmo te da las tablas de multiplicar de un numero, y siiii es el que usted le deee
