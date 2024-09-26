#include <stdio.h>

int main()
{
    int fahernheit, celsius;

    printf("please enter fahernheit as an integer: ");
    scanf("%d", &fahernheit);
    celsius = (fahernheit - 32)/1.8;
    printf("\n %d fahernheit is %d celsius.\n", fahernheit, celsius);

    return 0;

}