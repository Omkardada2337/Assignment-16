// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[3][3], sumr = 0, sumc = 0;
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
    printf("\n\n**************** Original matrix is : ***************\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sumr = sumr + a[i][j];
            sumc = sumc + a[j][i];
        }
        printf("\nSum of row %d : %d \n", i+1, sumr);
        printf("Sum of column %d : %d ", i+1, sumc);
        sumr = 0;
        sumc = 0;
        printf("\n");
    }

    getch();
    return 0;
}