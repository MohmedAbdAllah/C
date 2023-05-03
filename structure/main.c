#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define row 1
#define rw 3
struct Employee
{
int code;
char name[40];
char address[100];
int age;
float salary;
float overTime;
float deduct;
};
void gotoxy(int , int );

int main()
{
   struct Employee std1;
   float i,x,y,c;
   gotoxy(row*5+10,1*2+2);
   printf("Code :");
   gotoxy(row*5+10,2*2+2);
   printf("Name :");
   gotoxy(row*5+10,3*2+2);
   printf("Address :");
   gotoxy(row*5+10,4*2+2);
   printf("Age :");
   gotoxy(row*5+10,5*2+2);
   printf("Over Time :");
   gotoxy(row*5+10,6*2+2);
   printf("Salary :");
   gotoxy(row*5+10,7*2+2);
   printf("Deduction :");
   gotoxy(rw*5+10,1*2+2);
   scanf("%d",&std1.code);
   _flushall();
   gotoxy(rw*5+10,2*2+2);
   gets(std1.name);
   _flushall();
   gotoxy(rw*5+10,3*2+2);
   gets(std1.address);
   _flushall();
   gotoxy(rw*5+10,4*2+2);
   scanf("%d",&std1.age);
   _flushall();
   gotoxy((rw+1)*5+10,5*2+2);
   scanf("%f",&std1.overTime);
   c = std1.overTime;
   c*=50;
   _flushall();
   gotoxy(rw*5+10,6*2+2);
   scanf("%f",&std1.salary);
   x =std1.salary;
   _flushall();
   gotoxy((rw+1)*5+10,7*2+2);
   scanf("%f",&std1.deduct);
   y = std1.deduct;
   i = x - y + c;


   system("cls");
   gotoxy(row*5+10,1*2+2);
   printf("Code :%d\n",std1.code);
   gotoxy(row*5+10,2*2+2);
   printf("Name :%s\n",std1.name);
   gotoxy(row*5+10,3*2+2);
   printf("Net Salary :%0.2f\n",i);

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
