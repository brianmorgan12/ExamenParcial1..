#include <stdio.h>  .

int main()
 {
 int numeros[100];  
  int numElementos; 
    int i = 0;  
bool hayImpares = false;

    printf("dime cuantos numeros va a tener tu lista:");
    scanf("%d", &numElementos);

    printf(" ¿Cuales son esos numeros?\n ");
    while (i < numElementos) 
	{
        scanf("%d", &numeros[i]);  
        i++;
    }

    printf("estos son los numeros impares de esta lista:\n");
    i = 0;  
    while (i < numElementos) 
	{
        if (numeros[i] % 2 != 0) 
		{
            printf("%d\n", numeros[i]);  
            hayImpares = true; 
        }
        i++;
    }
    if (!hayImpares) 
	{
        printf("maestro no puso numero impares :) \n");
    }

    return 0;
}
// Aquí podemos ver un programa que si tu le das una lista de numeros te da los numeros impares de esa lista 

