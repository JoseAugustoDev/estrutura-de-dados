#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>

void random_nums() {
    int random_num;

    for (int i = 0; i < 10; i++) {
        random_num = rand() % 100;

        printf("%d \n", random_num);
    }

}

void dado() {

    int face1, face2, face3, face4, face5, face6;

    for (int i = 0; i < 20; i++) {
       int face = rand() % 6 + 1;

       switch (face) {
        case 1:
            face1 += 1;
            break;
        case 2:
            face2 += 1;
            break;
        case 3:
            face3 += 1;
            break;
        case 4:
            face4 += 1;
            break;
        case 5:
            face5 += 1;
            break;
        case 6:
            face6 += 1;
            break;
        default:
            break;
       }

    }
    printf("Face 1: %d \n", face1);
    printf("Face 2: %d \n", face2);
    printf("Face 3: %d \n", face3);
    printf("Face 4: %d \n", face4);
    printf("Face 5: %d \n", face5);
    printf("Face 6: %d \n", face6);
    
}

void swap_pointers(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}

void vec_pointer(int numbers[], int size) {

    int *ptr = numbers;
    int soma = 0;

    for (int i = 0; i < size; i++) {
        soma += *ptr;
        
        ptr++;
    }
    
    printf("Soma = %d \n", soma);

}

const char* compare_strings(char *str1, char *str2) {

    if (strlen(str1) != strlen(str2))
        return "Strings de tamanho diferente!";


    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != str2[i]) {
            return "Strings diferentes!";
        }
    }

    return "Strings Iguais";
    
}

void count_vowels(char *str) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (
            str[i] == 'a' || str[i] == 'A' 
            || str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' 
            || str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U'
        ) {
            count += 1;
        }

    }

    printf("Quantidade de vogais: %d \n", count);
    
}

void vec_bigger(int numbers[], int size) {
    int *ptr = numbers;
    int maior = numbers[0];

    for (int i = 0; i < size; i++) {
        if (*ptr > maior) {
            maior = *ptr;
        }

        ptr++;
    }
    
    printf("Maior = %d \n", maior);
}

void fill_mtx(int linha, int coluna) {

    int mtx[linha][coluna];

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {

            printf("Digite o item da coluna %d e linha %d: ", j, i);
            scanf("%d", &mtx[i][j]);

        }
    }

    print_mtx(linha, coluna, mtx);
    

}

void print_mtx(int linha, int coluna, int mtx[][coluna]) {

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", mtx[i][j]);
        }
        printf("\n");
    }
    
}

int main() {

    // srand(time(NULL));
    
    // dado();

    // random_nums();

    //////////////////////////

    // int x = 5, y = 10;

    // printf("X = %d\n", x);
    // printf("Y = %d\n", y);

    // swap_pointers(&x, &y);

    // printf("X = %d\n", x);
    // printf("Y = %d\n", y);

    //////////////////////////

    // int numbers[] = {10, 20, 30, 40, 50};

    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // vec_pointer(numbers, size);

    //////////////////////////

    // char str1[100];
    // char str2[100];

    // printf("Digite uma string: ");
    // scanf("%s", str1);

    // printf("Digite outra string: ");
    // scanf("%s", str2);

    // printf("%s \n", compare_strings(str1, str2));

    // char str[100];

    // printf("Digite a string: ");
    // scanf("%s", str);

    // count_vowels(str);

    //////////////////////////

    // int numbers[] = {10, 80, 30, 40, 50};

    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // vec_bigger(numbers, size);

    int x, y;

    printf("Quantas linhas: ");
    scanf("%d", &x);

    printf("Quantas colunas: ");
    scanf("%d", &y);

    fill_mtx(x, y);

    return 0;
}