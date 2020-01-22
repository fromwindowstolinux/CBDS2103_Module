#include <stdio.h>

int main(void)
{
    int Y[5];        /* Array declaration of 5 elements */
    Y[0] = 1;        /* Assign 1 to Y[0] */
    Y[1] = Y[0] * 2; /* Assign Y[0] * 2 expression to Y[1] */
    Y[2] = Y[1] * 3; /* Assign Y[1] * 3 expression to Y[2] */
    Y[3] = Y[2] * 4; /* Assign Y[2] * 4 expression to Y[3] */
    Y[4] = Y[3] * 5; /* Assign Y[3] * 5 expression to Y[4] */

    int i;
    for (i = 0; i < 5; i++)

        printf("index [%d] = digit %d\n", i, Y[i]);
}