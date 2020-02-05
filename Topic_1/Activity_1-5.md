# ACTIVITY 1.5

Refer to Multi-dimensional Arrays in C from the following link: https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm
Copy the coding given in the website and run it. Do you get the same output?

```
#include <stdio.h>
 
int main () 
{
	/* an array with 5 rows and 2 columns*/
	int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
	int i, j;
 
	/* output each array element's value */
	for ( i = 0; i < 5; i++ ) 
	{
		for ( j = 0; j < 2; j++ ) 
		{
			printf("a[%d][%d] = %d\n", i,j, a[i][j] );
		}
	}
	return 0;
}
```

Output:
```
a[0][0] = 0
a[0][1] = 0
a[1][0] = 1
a[1][1] = 2
a[2][0] = 2
a[2][1] = 4
a[3][0] = 3
a[3][1] = 6
a[4][0] = 4
a[4][1] = 8
```
