// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[3][3], b[3][3], c[3][3];
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
    printf("\n\nEnter the elements of matrix 2 : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter the row %d and column %d element of matrix 2 : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\n**************** Addition of two matrices is : ***************\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}