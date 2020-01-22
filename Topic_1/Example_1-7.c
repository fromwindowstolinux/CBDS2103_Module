#include <stdio.h>

// function prototype
void numberSort(int[]);

// main function
int main()
{
    // array declaration
    int number[10];
    int i;
    
    // input values
    for (i = 0; i < 10; i++)
    {
        printf("Input number %d : ", i);
        scanf(" %d", &number[i]);
    }

    // function call
    numberSort(number);
    printf("Sorted Number :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", number[i]);
    }
}

// function definition
void numberSort(int num[])
{
    int j;
    int k;
    int temporary;

    for (j = 0; j < 10; j++)
    {
        for (k = j + 1; k < 10; k++)
        {
            if (num[j] > num[k])
            {
                temporary = num[j];
                num[j] = num[k];
                num[k] = temporary;
            }
        }
    }
}