#include <stdio.h>
#include <math.h>

void quadrado(int num, int *pointer) {

    *pointer = num * num;

}

int main() {

    int pointer, num;

    printf("Digite o valor de x: ");
    scanf("%d", &num);

    quadrado(num, &pointer);

    printf("%d\n", pointer);

    return 0;
}