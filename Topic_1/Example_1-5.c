#include <stdio.h>

int main(void)
{
    int A[5] = {2, 4, 6, 8, 10};
    int B[5];
    int i;

    /* Copy one by one each array element in A to array B */
    for (i = 0; i < 5; i++)
    {
        B[i] = A[i];
    }

    printf("\nElements in array A :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }

    printf("\nElements in array B :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", B[i]);
    }
}