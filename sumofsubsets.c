#include <stdio.h>

int n;
int set[20];
int subset[20];
int target;

void sumOfSubsets(int index, int currentSum)
{
    int i;

    if (currentSum == target)
    {
        printf("{ ");
        for (i = 0; i < index; i++)
        {
            if (subset[i] == 1)
                printf("%d ", set[i]);
        }
        printf("}\n");
        return;
    }

    if (index == n || currentSum > target)
        return;

    /* Include the current element */
    subset[index] = 1;
    sumOfSubsets(index + 1, currentSum + set[index]);

    /* Exclude the current element */
    subset[index] = 0;
    sumOfSubsets(index + 1, currentSum);
}

int main()
{
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &set[i]);

    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("\nSubsets whose sum is %d are:\n", target);

    sumOfSubsets(0, 0);

    return 0;
}