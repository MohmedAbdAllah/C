#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x,y;
    float c;
    printf("Enter The Number of Row :");
    scanf("%d",&x);
    printf("Enter The Number of Colume :");
    scanf("%d",&y);
    int a[x][y];
    float b[x];
    for(j = 0;j <y ;j++)
    {
        c = 0;
        for(i = 0; i <x;i++)
        {
            printf("Please Enter Number (%d,%d):",i+1,j+1);
            scanf("%d",&a[i][j]);
            c+=a[i][j];
        }
        b[j] = c/x;
    }
    printf("________________________________________________________________________________________________________");
    printf("\n");
    printf("the matrix is :\n");
    for(i = 0;i<x;i++)
    {
     for(j = 0;j <y ;j++)
     {
        for(j = 0;j <y ;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
    }
    printf("________________________________________________________________________________________________________");
    for(j = 0;j <y ;j++)
    {
        printf("\n The Average of The Colume Number %d is %0.1f ",j+1,b[j]);
    }

}
