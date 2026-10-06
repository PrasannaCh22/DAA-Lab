#include <stdio.h>

int n;
int cost[20][20];
int visited[20];
int minCost = 99999;

void tsp(int current, int count, int totalCost)
{
    int i;

    // All cities visited
    if (count == n)
    {
        // Return to starting city
        totalCost = totalCost + cost[current][0];

        if (totalCost < minCost)
            minCost = totalCost;

        return;
    }

    // Try every unvisited city
    for (i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;

            tsp(i, count + 1,
                totalCost + cost[current][i]);

            visited[i] = 0;
        }
    }
}

int main()
{
    int i, j;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter the cost matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
        }
    }

    // Start from city 0
    visited[0] = 1;

    tsp(0, 1, 0);

    printf("\nMinimum Cost = %d\n", minCost);

    return 0;
}