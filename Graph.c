#include<windows.h>

#include<stdio.h>

#include<math.h>



void prox(float *x)

{

*x = round(*x * 100) / 100;

}



void fill(char arr[][1601])

{

int i, j;

for (i = 0; i < 801; i++)

{

for (j = 0; j < 1601; j++)

{

arr[i][j] = ' ';

}

}

for (j = 0; j < 1601; j++)

arr[400][j] = 219;



for (i = 0; i < 801; i++)

arr[i][800] = 219;

}



void print(char arr[][1601])

{

int i, j;

for (i = 0; i < 801; i++)

{

for (j = 0; j < 1601; j++)

{

printf("%c", arr[i][j]);

}

printf("\n");

}

}



void fo(char arr[][1601])

{

float xv, yv;

int row, col;



for (xv = -10.0; xv <= 10.0; xv += 0.005)

{

yv = pow(2,pow(-xv,2));

col = 800 + (int)round(xv * 80);

row = 400 - (int)round(yv * 40);



if (row >= 0 && row < 801 && col >= 0 && col < 1601)

arr[row][col] = 219;

}

}



int main()

{

int i = 0;

char graph[801][1601];

fill(graph);

for (i = 0; i < 100; i++)

printf("\n");

fo(graph);

print(graph);

}
