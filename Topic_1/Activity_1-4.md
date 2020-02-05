# ACTIVITY 1.4

Visit https://phanderson.com/C/arraysum.html again. This time, examine how functions are used with arrays. Modify all the program codes if functions are not used. Will the answers still be the same? Write down your output (if any) in the myINSPIRE forum.
```
#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
    int i;
    int sum;
    printf("Array:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("\nThe sum is %d\n", sum);
}
```
Output :
```
Array:
1 2 0 0 4 5 6 9 9 17 
The sum is 53
```
