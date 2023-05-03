#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int , int );
int main()
{
    int i,x,o,y,j=0;
    int size;
    int row,col;

    //printf("pleas enter the size of magic box : ");
    //scanf("%d",&size);


    do
    {
     printf("pleas enter the size of magic box : ");
     scanf("%d",&size);
     o=1+(size/2);
     row=1;
     col=o;

    if(size%2!=0)
    {
        j++;
    }
    if(size%2==0)
    {
        printf("invalid number the size of the magic box should be odd\n");

    }
    }while(j==0);
    system("cles");
    for(i=1;i<=size*size;i++)
    {
        gotoxy(col*5+10,row*2+2);
        printf("%d",i);

        if(i%size!=0)
        {
            col--;
            row--;
        }
        if(i%size==0)
        {
            row++;
        }
        if(col==0)
        col=size;
        if(row==0)
        row=size;
    }
   getch();
}


void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
