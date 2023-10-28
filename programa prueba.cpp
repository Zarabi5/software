#include<stdio.h>
#include<conio.h>

int main() {
    int a, b, c;
    printf("Introduce el primer valor: ");
    scanf("%d", &a);
    printf("Introduce el segundo valor: ");
    scanf("%d", &b);
    c = a + b;
    printf("El resultado de la suma es = %d", c);
    getch();
    return 0;
}

