#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    if (A == B)
    {
        printf("%d", pow(A,3));
    }
    else
    {
        printf("%d", B + A);
    }

    return 0;
}