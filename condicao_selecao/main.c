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

void prefeitura() {
    float salario_bruto;
    float valor_prestacao;
    float limite;

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Digite o valor da prestação: ");
    scanf("%f", &valor_prestacao);

    limite = salario_bruto * 0.3;

    if (valor_prestacao > limite) {
        printf("Valor da prestação maior do que o limite.\n");
    } else {
        printf("Valor da prestação dentro do limite.\n");
    }
}

void comissao() {
    float venda_semanal;
    float fixo_semanal;
    float comissao;
    float bonus;
    float valor_final;

    comissao = 0.09;
    bonus = 800;
    fixo_semanal = 200;

    printf("Digite o valor das vendas semanais: ");
    scanf("%f", &venda_semanal);

    if (venda_semanal > 0 && venda_semanal < 1000) {
        valor_final = fixo_semanal + (venda_semanal * comissao);
    
    } else if (venda_semanal >= 1000) {
        valor_final = fixo_semanal + (venda_semanal * comissao) + bonus;
    
    } else {
        printf("Valor inválido\n");
    }

    printf("Total semanal: %f\n", valor_final);
}

void situacao() {

    int i;
    float nota;
    float soma;
    float media;

    i = 0;

    while (i < 3) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        soma += nota;
        i += 1;

    }

    media = soma / i;

    printf("%f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else if(media >= 5.0) {
        printf("Recuperação!\n");
    } else {
        printf("Reprovado!\n");
    }
}

int main() {
    
    // par_impar();

    // prefeitura();

    // comissao();

    // situacao();

    return 0;
}