# include <stdio.h>
# include <conio.h>
# include <windows.h>
void gotoxy(int , int );
struct student
{
    int ID ;
    char name[20];
    int Age;
    char Grade;
    float salary;
};

int main()
{
    printf("Hello world!\n");
    return 0;
}
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
