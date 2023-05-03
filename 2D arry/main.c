#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,j,x,y;
    printf("Enter The Number of Row :");
    scanf("%d",&x);
    printf("Enter The Number of Colume :");
    scanf("%d",&y);
    int a[x][y];
    for(i = 0; i <x;i++)
    {
        for( j= 0;j <y ;j++)
        {
            printf("Please Enter Number (%d,%d):",i+1,j+1);
            scanf("%d",&a[i][j]);

        }

    }
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
    return 0;
}
