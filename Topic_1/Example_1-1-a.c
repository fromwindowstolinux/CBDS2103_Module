#include <stdio.h>

int main(void)
{
    int digit[10]; /* Declare digit array of size 10 */
    digit[0] = 7; /* Assign 7 to the first element */
    digit[1] = 5; /* Assign 5 to the second element */
    digit[2] = 3; /* Assign 3 to the third element */
    digit[3] = 8; /* Assign 8 to the fourth element */
    digit[4] = 0; /* Assign 0 to the fifth element */
    digit[5] = 9; /* Assign 9 to the sixth element */
    digit[6] = 2; /* Assign 2 to the seventh element */
    digit[7] = 4; /* Assign 4 to the eighth element */
    digit[8] = 1; /* Assign 1 to the ninth element */
    digit[9] = 6; /* Assign 6 to the tenth element */
    
    int i;
    for(i=0; i<10; i++)

    printf("index [%d] = digit %d\n", i, digit[i]);
}