#include <stdio.h>

int main() {
	int n;
// Usamos 'unsigned long long' para números grandes
	unsigned long long factorial = 1;  
	printf("Ingrese un número entero positivo: \n");
	scanf("%d", &n);

	if (n < 0) {
    	printf("El factorial no está definido para números negativos.\n");
	} else {
    		for (int i = 1; i <= n; ++i) {
        			factorial *= i;
    	}
    		printf("El factorial de %d es: %llu\n", n, factorial);
	}
	return 0;
}