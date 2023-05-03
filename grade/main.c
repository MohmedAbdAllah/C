#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

for (y=1;y<10;y++)
{
    printf("Enter your grade : ");
    scanf("%d",&x);

    if(x<50)
    {
        printf("you are fall \n");
    }
    else if (50<=x,x<65)
    {
        printf("your grade 'D' \n");

    }
    else if (65<=x,x<75)
    {
        printf("your grade is 'c' \n");
    }
      else if (75<=x,x<85)
    {
        printf("your grade is  'B' \n");
    }
      else if (85<=x,x<100)
    {
        printf("your grade is  'A' \n");
    }
}

}
