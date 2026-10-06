#include <stdio.h>

#define SIZE 9

int sudoku[SIZE][SIZE];

int isSafe(int row, int col, int num)
{
    int i, j;
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    /* Check row */
    for (i = 0; i < SIZE; i++)
    {
        if (sudoku[row][i] == num)
            return 0;
    }

    /* Check column */
    for (i = 0; i < SIZE; i++)
    {
        if (sudoku[i][col] == num)
            return 0;
    }

    /* Check 3 x 3 box */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (sudoku[startRow + i][startCol + j] == num)
                return 0;
        }
    }

    return 1;
}

int solveSudoku()
{
    int row, col, num;

    /* Find an empty cell */
    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            if (sudoku[row][col] == 0)
            {
                /* Try numbers from 1 to 9 */
                for (num = 1; num <= 9; num++)
                {
                    if (isSafe(row, col, num))
                    {
                        sudoku[row][col] = num;

                        if (solveSudoku())
                            return 1;

                        /* Backtrack */
                        sudoku[row][col] = 0;
                    }
                }

                return 0;
            }
        }
    }

    return 1;
}

void printSudoku()
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j;

    printf("Enter the Sudoku puzzle (use 0 for empty cells):\n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &sudoku[i][j]);
        }
    }

    if (solveSudoku())
    {
        printf("\nSolved Sudoku:\n");
        printSudoku();
    }
    else
    {
        printf("\nNo solution exists.\n");
    }

    return 0;
}