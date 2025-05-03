#include <math.h>
#include <stdio.h>

void farenheit_to_celsius() {
    float farenheit;

    printf("Digite a temperatura em F: ");
    scanf("%f", &farenheit);

    float temperature = 5 * (farenheit - 32) / 9.;

    printf("Temperatura em Celsius: %f\n", temperature);


}

void celsius_to_farenheit() {
    float celsius;

    printf("Digite a temperatura em C: ");
    scanf("%f", &celsius);

    float temperature = ((celsius / 5) * 9.) + 32;

    printf("Temperatura em Celsius: %f\n", temperature);


}

void media_notas() {
    
    float nota;
    float soma = 0;
    int i = 0;

    while(i < 3) {
        printf("Digite a nota %i: ", i + 1);
        scanf("%f", &nota);

        soma += nota;

        i += 1;
    }

    float media = soma / i;

    printf("Media: %f\n", media);

}

void prefeitura() {

    float salario;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);

    float valor_max;

    valor_max = salario * 0.3;

    printf("O valor máximo da prestação é: %0.2f\n", valor_max);

}

void equacao() {
    float a;
    float b;
    float c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    float delta; 
    
    delta = pow(b, 2) - (4 * a) * c;

    if (delta < 0) {
        printf("A equação não possuí raízes reais");
        return;
    }

    float x1;
    float x2;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a); 

    printf("O valor de X1 é: %0.2f\n", x1);
    printf("O valor de X2 é: %0.2f\n", x2);
}

void tempo_download() {
    float tamanho;
    float velocidade;
    float link_em_mb;
    float tempo_em_seg;
    float minutos;

    printf("Digite o tamnho do arquivo (Mb): ");
    scanf("%d", &tamanho);

    printf("Digite a velocidade do link (Mbps): ");
    scanf("%d", &velocidade);

    link_em_mb = velocidade / 8.192;

    tempo_em_seg = tamanho / link_em_mb;

    minutos = tempo_em_seg / 60;

    printf("Demora %f minutos.\n", minutos);

}

void swap() {
    int x;
    int y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    
    x = x + y;
    y = x - y;
    x = x - y;

    printf("Valor de X atual: %d\n", x);
    printf("Valor de Y atual: %d\n", y);
}

void digito() {
    int numero;
    int escolha;
    int resultado;

    printf("Digite a sequência de quatro digitos: ");
    scanf("%d", &numero);

    printf("Escolha qual digito deseja extrair (1 a 4): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            resultado = numero / 1000;
            break;
        case 2:
            resultado = (numero / 100) % 10;
            break;
        case 3:
            resultado = (numero / 10) % 10;
            break;
        case 4:
            resultado = numero % 10;
            break;
            
        default:
            break;
    }
    printf("%d\n", resultado);

}

int main() {
    
    farenheit_to_celsius();

    celsius_to_farenheit();

    media_notas();

    prefeitura();

    equacao();

    tempo_download();

    swap();

    digito();

    return 0;
}