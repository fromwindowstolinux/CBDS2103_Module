# SELF-CHECK 1.3

1.  Look at the assignment given below. The comments are given as a guide. Based on your understanding of the examples given earlier and the illustration in Figure 1.5, draw an array based on the following statements:
```
    int S[5];           /* Declare array with 5 elements */
    int i = 0, j = 1;

    S[i] = 8;           /* Assign 8 to S[0] */
    S[0] = 8;

    S[j] = S[i]+5;      /* Assign S[0] + 5 to S[1] */
    S[1] = S[0]+5;
    S[1] = 8+5;
    S[1] = 13;

    S[j+1] = S[i]*S[j]; /* Assign S[0] * S[1] to S[2] */
    S[1+1] = S[0]*S[1];
    S[2] = 8*13
    S[2] = 104;

    S[j*3] = S[i+2];    /* Assign S[2] to S[3] */
    S[1*3] = S[0+2]
    S[3] = S[2];
    S[3] = 104

    S[j*4] = S[j*2];    /* Assign S[2] to S[4] */
    S[1*4] = S[1*2];
    S[4] = S[2];
    S[4] = 104;
```
[Imgur](https://i.imgur.com/58KvAjj.png)

2.  Referring to the arrays that are declared below, state the values that are assigned to each array element.

    (a) `int abc[6]	= {0, 2, 4, 6, 8, 10};` [Imgur](https://i.imgur.com/1N0lJYP.png)

    (b) `float c[5]	= {2.0, 0.5, 1.2, 0.3};` [Imgur](https://i.imgur.com/rVoKqsT.png)

    (c) `int xyz[10]	= {5, 10, 0, 10, 5, 0, 0};` [Imgur](https://i.imgur.com/02MMnTJ.png)

3.  Given the following program segments, what are the values of the array elements at the end of the respective segments?
    
a. `int M[5] = {2, 3}; `

```
M[2] = M[1] * 3;
M[2] = 3 * 3;
M[2] = 9;
M[3] = M[2] * 1;
M[3] = 9 * 1;
M[3] = 9;
M[4] = M[0] * 2 * 3;
M[4] = 2 * 2 * 3;
M[4] = 12;
```
[Imgur](https://i.imgur.com/bPaaDjR.png)
    
b. `int R[4], i = 1; `

```
R[i - 1] = 8;
R[1 – 1] = 8;
R[0] = 8;
R[i] = R[i - 1] * 8;
R[1] = R[0] * 8;
R[1] = 8 * 8;
R[1] = 64;
R[i + 1] = R[i] + 10;
R[1 + 1] = R[1] + 10;
R[2] = 64 + 10;
R[2] = 74;
R[i + 2] = R[i] * 5;
R[1 + 2] = R[1] * 5;
R[3] = 64 * 5;
R[3] = 320;
```
  [Imgur](https://i.imgur.com/6wvIl6c.png)
