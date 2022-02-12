#include <stdio.h>
#include <stdlib.h>

int desafio1(){
    int p, r;

    scanf("%d%d", &p, &r);

    if (p == 0 && r == 0){
        printf("A\n");
    } else if (p == 1 && r == 0){
        printf("B\n");
    } else{
        printf("C\n");
    }

    return 0;
}

int desafio2(){
    int a, m;

    scanf("%d%d", &a, &m);

    while (a <= 0 || a > 50){
        printf("Digite um valor entre 1 e 50");
        scanf("%d", &a);
    }
    while (m <= 0 || m > 50){
        printf("Digite um valor entre 1 e 50");
        scanf("%d", &m);
    }
    int soma = a + m;

    if (soma > 50){
        printf("N");
    } else{
        printf("S");
    }

    return 0;
}

int desafio3(){

    double a, b;

    scanf("%lf%lf", &a, &b);

    double resultado = (a + b) / 2;

    if (resultado >= 7){
        printf("Aprovado");
    } else if (resultado  >= 4 && resultado < 7){
        printf("Recuperacao");
    } else{
        printf("Reprovado");
    }


    return 0;
}

int desafio4(){

    int x;

    scanf("%d", &x);

    if (x == 0){
        printf("nulo");
    } else if (x < 0){
        printf("negativo");
    } else{
        printf("positivo");
    }


    return 0;
}

int desafio5(){

    int a, b;

    scanf("%d%d", &a, &b);

    int soma = a + b;

    if(soma % 2 == 0){
        printf("Bino");
    } else{
        printf("Cino");
    }

    return 0;
}

int desafio6(){
    int p1, c1, p2, c2;

    scanf("%d%d%d%d", &p1, &c1, &p2, &c2);

    while (p1 < 10 || p1 > 100){
        printf("Digite um valor entre 10 e 100");
        scanf("%d", &p1);
    }
    while (c1 < 10 || c1 > 100){
        printf("Digite um valor entre 10 e 100");
        scanf("%d", &c1);
    }
    while (p2 < 10 || p2 > 100){
        printf("Digite um valor entre 10 e 100");
        scanf("%d", &p2);
    }
    while (c2 < 10 || c2 > 100){
        printf("Digite um valor entre 10 e 100");
        scanf("%d", &c2);
    }

    if((p1 * c1) == (p2 * c2)){
        printf("0");
    } else if ((p1 * c1) > (p2 * c2)){
        printf("-1");
    } else{
        printf("1");
    }


    return 0;
}

int desafio7(){

    int n;

    scanf("%d", &n);

    


    return 0;
}

int decrescente(const void *a, const void *b){
    int x = *((const int *)a), y = *((const int  *)b);
    if(x > y){
        return -1;
    }
    if(x < y){
        return 1;
    }
    return 0;
}
int crescente(const void *a, const void *b){
    int x = *((const int *)a), y = *((const int  *)b);
    if(x < y){
        return -1;
    }
    if(x > y){
        return 1;
    }
    return 0;
}

int desafio8(){
    int vet[10];

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vet[i]);
    }

    qsort(vet,10,sizeof(vet[0]),crescente);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    qsort(vet,10,sizeof(vet[0]),decrescente);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", vet[i]);
    }


    return 0;
}

int desafio9(){
    int n;

    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &vet[i]);
    }

    qsort(vet,n,sizeof(vet[0]),crescente);

    for (int i = 0; i < n; ++i) {
        printf("%d \n", vet[i]);
    }
    return 0;
}

int desafio10(){




    return 0;
}


int main() {
    desafio9();

    return 0;
}
