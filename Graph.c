#include <windows.h>
#include <stdio.h>
#include <math.h>

void fill(char arr[][801])
{
    int i, j;
    for (i = 0; i < 401; i++)
        for (j = 0; j < 801; j++)
            arr[i][j] = ' ';
    for (j = 0; j < 801; j++)
        arr[200][j] = 219;
    for (i = 0; i < 401; i++)
        arr[i][400] = 219;
}

void print(char arr[][801])
{
    int i;
    for (i = 0; i < 401; i++)
    {
        fwrite(arr[i], 1, 801, stdout);
        putchar('\n');
    }
}

void foo(char arr[][801])
{
    float xv, yv;
    int row, col;
    for (xv = -10.0; xv <= 10.0; xv += 0.01)
    {
        yv = pow(20 - xv * xv, 0.5);
        col = 400 + (int)round(xv * 40);
        row = 200 - (int)round(yv * 20);
        if (row >= 0 && row < 401 && col >= 0 && col < 801)
            arr[row][col] = 219;
    }
}

void fo(char arr[][801])
{
    float xv, yv;
    int row, col;
    for (xv = -10.0; xv <= 10.0; xv += 0.01)
    {
        yv = -pow(20 - xv * xv, 0.5);
        col = 400 + (int)round(xv * 40);
        row = 200 - (int)round(yv * 20);
        if (row >= 0 && row < 401 && col >= 0 && col < 801)
            arr[row][col] = 219;
    }
}

void fox(char arr[][801])
{
    float xv, yv;
    int row, col;
    for (xv = -10.0; xv <= 10.0; xv += 0.01)
    {
        yv = xv * xv;
        col = 400 + (int)round(xv * 40);
        row = 200 - (int)round(yv * 20);
        if (row >= 0 && row < 401 && col >= 0 && col < 801)
            arr[row][col] = 219;
    }
}

void foxo(char arr[][801])
{
    float xv, yv;
    int row, col;
    for (xv = -10.0; xv <= 10.0; xv += 0.01)
    {
        yv = xv / 2 - tan(xv) + sin(xv);
        col = 400 + (int)round(xv * 40);
        row = 200 - (int)round(yv * 20);
        if (row >= 0 && row < 401 && col >= 0 && col < 801)
            arr[row][col] = 219;
    }
}

void go(char arr[][801])
{
    float xv, yv;
    int row, col, i = 0;
    for (xv = -10.0; xv <= 10.0; xv += 0.01)
    {
        yv = i % 5;
        col = 400 + (int)round(xv * 40);
        row = 200 - (int)round(yv * 20);
        i++;
        if (row >= 0 && row < 401 && col >= 0 && col < 801)
            arr[row][col] = 219;
    }
}

void gox(char arr[][801])
{
    float xv, yv;
    int row, col, i = 0;
    for (xv = -10.0; xv <= 10.0; xv += 0.01)
    {
        if (xv == 0) continue;
        yv = 1 / xv;
        col = 400 + (int)round(xv * 40);
        row = 200 - (int)round(yv * 20);
        i++;
        if (row >= 0 && row < 401 && col >= 0 && col < 801)
            arr[row][col] = 219;
    }
}

int main()
{
    int i = 0;
    char graph[401][801];
    fill(graph);
    for (i = 0; i < 100; i++)
        printf("\n");
    gox(graph);
    print(graph);
}
