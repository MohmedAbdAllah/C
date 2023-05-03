#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,s;
    int k;
    printf("Enter the number of lines : ");
    scanf("%d",&k);

    for(r=1;r<=k;r++)
    {
        for(s=k-r;s>=1;s--)
        {
            printf(" ");

        }
        for(c=1;c<=(r*2)-1;c++)
        {
            printf("*");

        }
        printf("\n");

    }

}
