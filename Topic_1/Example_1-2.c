#include <stdio.h>

int main(void)
{
    int X[3];     /* Array declaration of 3 elements */
    X[0] = 2;     /* Assign 2 to X[0] */
    X[1] = 3 + 4; /* Assign 7 to X[1] */
    X[2] = 5 * 6; /* Assign 30 to X[2] */

    int i;
    for (i = 0; i < 3; i++)

        printf("index [%d] = digit %d\n", i, X[i]);
}