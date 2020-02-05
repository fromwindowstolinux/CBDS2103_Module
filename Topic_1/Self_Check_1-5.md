# SELF-CHECK 1.5

Declare a two-dimensional array that has three rows and five columns called pqr. Assign the initial values for each row element of the first row with value 1, the second row element with value 2 and each element in the third row with value 3.

```
#include <stdio.h>
 
int main () 
{
	/* an array with 3 rows and 5 columns*/
	int pqr[3][5] = { {1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3} };
	int row;
	int column;
 
	/* output each array element's value */
	for ( row = 0; row < 3; row++ ) 
	{
		for ( column = 0; column < 5; column++ ) 
		{
			printf("a[%d][%d] = %d\n", row, column, pqr[row][column]);
		}
	}
	return 0;
}
```
