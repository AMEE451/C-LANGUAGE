#include <stdio.h>

int main()
{
    int a, b;

    int *ap;
    int *bp;

    printf("enter any number :");
    scanf("%d", &a);
    printf("enter any number :");
    scanf("%d", &b);
    ap = &a;
    bp = &b;

    *ap = a + b;
    *bp = a - b;
    *ap = a - b;

    printf("A : %d\n", *ap);
    printf("B : %d\n", *bp);
}
