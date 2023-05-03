#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x ,a,f,y,c =a,b = 0;
 printf("Please Enter The Arry Size : ");
 scanf("%d",&y);
 int arry[y];
 for(x = 0;x < y;x++)
    {
        printf("Please Enter Number %d in THE ARRY : ",x+1);
        scanf("%d",&arry[x]);
        a = arry[x];
        if(a > b)
            b = a;
        if(a < c)
           c = a;
    }
    printf("The Minimum Number In The Arry Is %d , The Maximum Number In The Arry Is %d",c,b);
    printf("\n %d ",b);
    for(f = 0;f < y-1;f++)
     {
         c = 0;
         for(x = 0;x < y;x++)
        {
            a = arry[x];
            if(b > a & a > c)
                c = a;
        }
        b = c;
        printf("%d ",c);
     }
}
