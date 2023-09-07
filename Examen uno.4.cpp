#include <stdio.h> 
int main() 
{
    double numero;

    printf("Dame numeros positivos y cuando me des un numero negativo me detengo\n");
  while (1)
  {  
        printf("Dame el valor que quieras:");
        scanf("%lf", &numero);  
    if (numero < 0) 
		{
            printf("Numero negativo ingresado. Terminando el programa.\n");
            break; 
        }

  }

    return 0;
}
//Este algoritmo de aquí funciona cuando le las números positivos y se detiene cuando le das un numero negativo 
