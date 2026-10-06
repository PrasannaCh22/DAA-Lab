#include <stdio.h>

int board[20][20];
int n;

int isSafe(int row, int col)
{
    int i, j;

    /* Check column */
    for (i = 0; i < row; i++)
    {
        if (board[i][col] == 1)
            return 0;
    }

    /* Check upper-left diagonal */
    for (i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
            return 0;
    }

    /* Check upper-right diagonal */
    for (i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1)
            return 0;
    }

    return 1;
}

int solveNQueens(int row)
{
    int col;

    /* All queens are placed */
    if (row == n)
        return 1;

    for (col = 0; col < n; col++)
    {
        if (isSafe(row, col))
        {
            board[row][col] = 1;

            if (solveNQueens(row + 1))
                return 1;

            /* Backtrack */
            board[row][col] = 0;
        }
    }

    return 0;
}

void printBoard()
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
                printf("Q ");
            else
                printf("- ");
        }
        printf("\n");
    }
}

int main()
{
    int i, j;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    /* Initialize board */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }

    if (solveNQueens(0))
    {
        printf("\nOne possible solution is:\n");
        printBoard();
    }
    else
    {
        printf("\nNo solution exists for N = %d\n", n);
    }

    return 0;
}