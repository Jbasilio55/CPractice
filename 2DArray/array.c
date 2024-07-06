#include <stdio.h>

int main()
{
    //  2D array =  an array, where each element is an entire array
    //              useful if you need a matrix, grid, or table of data

    int numbers[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                        };

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int col = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", col);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}