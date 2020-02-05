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
    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", 
    square[0][0], square[0][1], square[0][2], square[0][3],
    square[1][0], square[1][1], square[1][2], square[1][3],       
    square[2][0], square[2][1], square[2][2], square[2][3],
    square[3][0], square[3][1], square[3][2], square[3][3]);
}
