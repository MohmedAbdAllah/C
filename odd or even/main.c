#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0;


    for(i=10;i>0;i--)
    {
       printf("Enter the number : ");
       scanf("%d",&x);
    if(x%2==0)
    {
        printf("The number you entered is Even\n");
    }
    else
    {
        printf("The number you entered is Odd\n");
    }
    }
}
