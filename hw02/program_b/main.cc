#include <cstdio>

#include "swap.h"
/************************************************************************
 *
 ************************************************************************/
int main() {
    printf("Enter two integers\n");
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("You entered %d, %d\n", a, b);
    swap (&a, &b);
    printf("Swapped: %d, %d\n", a, b);

} // end of main

