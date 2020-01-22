#include <stdio.h>

int main(void)
{
    // Declaring array //
    int square[4][4];
    int i;
    int j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter a value for [%d][%d]: ", i, j);
            // Assigning values to the array elements
            scanf("%d", &square[i][j]);
        }
    }
}
