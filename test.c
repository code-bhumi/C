#include <stdio.h>

int main() {
    float a, b, sum;
    printf("Input two floats: ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    printf("\n%f + %f == %f\n", a, b, sum);

    return 0;
}