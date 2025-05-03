#include <stdio.h>
#include <math.h>

void par_impar() {

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 != 0) {
        printf("%d é impar.\n", numero);
    } else {
        printf("%d é par.\n", numero);
    }

}

int main() {
    
    par_impar();

    

    return 0;
}