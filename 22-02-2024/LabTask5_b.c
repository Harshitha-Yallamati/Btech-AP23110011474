#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define N 4

typedef struct 
{
    int chessboard[N][N];
    int qrow; 
    int qcol; 
} chessboard;

bool isSafe(int chessboard[N][N], int row, int col) 
{
    int i, j;
    for (i = 0; i < col; i++)
        if (chessboard[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (chessboard[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (chessboard[i][j])
            return false;
    return true;
}

void printboard(int chessboard[N][N]) 
{
    int i,j;
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", chessboard[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void Queens() 
{
    int i,j;
    chessboard intial;
    for ( i = 0; i < N; i++)
        for ( j = 0; j < N; j++)
            intial.chessboard[i][j] = 0;
    intial.qrow = -1;
    intial.qcol = -1;

    chessboard *queue = (chessboard *)malloc(N * N * sizeof(chessboard));
    int front = -1, rear = -1;

    queue[++rear] = intial;

    while (front != rear) 
    {
        chessboard current = queue[++front];

        if (current.qcol == N - 1) 
        {
            printboard(current.chessboard);
            continue;
        }
        int i;

        for ( i = 0; i < N; i++) 
        {
            if (isSafe(current.chessboard, i, current.qcol + 1)) 
            {
                chessboard newchessboard = current;
                newchessboard.chessboard[i][current.qcol + 1] = 1;
                newchessboard.qrow = i;
                newchessboard.qcol = current.qcol + 1;
                queue[++rear] = newchessboard;
            }
        }
    }

    free(queue);
}

int main() {
    printf("Solutions to the 4-Queens Problem:\n");
    Queens();
    return 0;
}

