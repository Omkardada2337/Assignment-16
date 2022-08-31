// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[3][3], countz = 0;
    system("cls");

    printf("Enter the elements of matrix 1 : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter the r %d row and column %d element of matrix 1 : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
            {
                countz++;
            }
        }
    }
    if (countz > 4)
    {
        printf("\nIt is a Sparse Matrix");
    }
    else
    {
        printf("\nIt is a Dense Matrix");
    }

    getch();
    return 0;
}