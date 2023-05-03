# include <stdio.h>
# include <conio.h>
# include <windows.h>

# define ENTER 13
# define ESC 27
# define TAB 9

# define UP 72
# define DOWN 80
# define END 79
# define HOME 71
# define RIGHT 77
# define LEFT  75
# define Null -32

# define STARTROW 3
# define STARTCOL 15
# define ITEMS 4
# define ITEMS2 3
//to define the function//
float calculator(float,float,char);
void gotoxy(int , int );
int magicbox(int);


int main()
{
    char menu[ITEMS][11] = {"Welcome", "calculator", "Games", "Exit"} ;
    //char menu2[ITEMS2][20] ={"1-back to main menu","2-back to calculator","3-Exit"};
    char  mychar;
    int currentchoice = 0 ;
    int size,quitFlag=0 ;
    int i ;
    float x,y,j,b;
    char w,operation_system;

    WORD wColorNorm =0x85; // A word is an integer number of bytes for example, one, two, four, or eight 32 bits ex
	WORD wColorHigh =0xDE;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
                     //This is used to reset the carat/cursor to the top left
                    // file pointer to screen


    do
    {

    system("cls"); // clear screen
    SetConsoleTextAttribute(hStdOut,0x0D);


    gotoxy(3,2);
    printf(" * Main Menu * \n");
    gotoxy(3,3);
    printf("-----------------------\n");


    for(i=0;i<ITEMS;i++)
    {
        if(i==currentchoice)
        {
          SetConsoleTextAttribute(hStdOut,0x0A);
          gotoxy(7,4+i);
          printf("%s",menu[i]);
          printf("\n");
        }
        else
        {

        SetConsoleTextAttribute(hStdOut,0x02);
        gotoxy(7,4+i);
        printf("%s",menu[i]);
        printf("\n");
        }
    }

    mychar=getch();
    if(mychar==NULL)
        {
            mychar=getch();
        }

    switch(mychar)
    {
        case UP :
        {

           switch(currentchoice)
              {
                  case 0 :
                    {
                        currentchoice=3;
                    }break ;
                  case 1 :
                    {
                        currentchoice=0;
                    }break ;
                  case 2 :
                    {
                       currentchoice=1;
                    }break ;
                  case 3 :
                    {
                        currentchoice=2;
                    }break ;
                }
        }break;

          case DOWN :
            {
                switch(currentchoice)
                {
                    case 0 :
                      {
                          currentchoice=1;
                      }break ;
                    case 1 :
                        {
                            currentchoice=2;
                        }break ;
                    case 2 :
                        {
                            currentchoice=3;
                        }break ;
                    case 3 :
                        {
                            currentchoice=0;
                        }break ;
                }
            }break;
            case HOME :
            {
                currentchoice=0;
            }break;

            case END :
            {
                currentchoice=3;

            }break;

         case ENTER :
         {
                 switch(currentchoice)
                 {
                     case 0 :
                       {
                           system("cls");
                           SetConsoleTextAttribute(hStdOut,0x0c);
                           gotoxy(12,12);
                           printf(" *****Welcome to Kerolos Tharwat Main Menu****\n ");
                           gotoxy(12,13);
                           printf("--------------------------------------------------\n");
                           gotoxy(12,14);
                           printf("   I wish you find what you want in my menu ");
                           getch();

                       }break ;
                     case 1 :
                        {
                            system("cls");
                            //gotoxy(4,2);
                                do
                                {

                                SetConsoleTextAttribute(hStdOut,0x03);
                                printf("enter the first number : ");
                                fflush(stdin);
                                scanf("%f",&x);
                                fflush(stdin);
                                printf("enter the second number : ");
                                fflush(stdin);
                                scanf("%f",&y);
                                printf("enter any operation from this (+) (-) (/) (*) : ");
                                fflush(stdin);
                                scanf("%c",&operation_system);
                                fflush(stdin);
                                quitFlag=calculator(x,y,operation_system);
                                 if(quitFlag==1)
                                    w = ESC;
                                 else
                                    w = 1;
                                }while(w==ESC);
                            //printf("the result is : %f",b);
                            //getch();
                        }break ;
                     case 2 :
                        {
                            system("cls");
                            //gotoxy(10,15);
                            SetConsoleTextAttribute(hStdOut,0x01);
                            printf("pleas enter the size of magic box : ");
                            scanf("%d",&size);
                            magicbox(size);
                            //getch();
                        }break ;
                     case 3 :
                        {
                            quitFlag=1;

                        }break ;
                 }

         }break ;
         case ESC :
         {
             quitFlag=1;
         }break;
    }
    }while(quitFlag==0);
    SetConsoleTextAttribute(hStdOut,0x07);
    return(0);
}


void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}

           //calculator function//

float calculator(float x,float y,char operation_system)
{

    float k;
    char w,i,m;
    int quitFlag=0,flag=0;
    char  mychar2;
    int currentchoice = 0 ;
    char menu2[ITEMS2][11] ={"main menu","Exit"};

    WORD wColorNorm =0x85;
	WORD wColorHigh =0xDE;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);


    switch(operation_system)
    {
    case '+' :
        {
            k=x+y ;
            fflush(stdin);
            printf("the number after operation is %f \n",k);
            printf("---------------------------------------\n");
            w=getch();

        }break;
    case '-' :
        {
            if(x>y)
            {
              k=x-y ;
              fflush(stdin);
              printf("the number after operation is %f \n",k);
              printf("---------------------------------------\n");
              w=getch();
            }
            else if (y>x)
            {
                k=y-x ;
                fflush(stdin);
                printf("the number after operation is %f \n",k);
                printf("---------------------------------------\n");
                w=getch();
            }
            else
            {
                k=x-y ;
                fflush(stdin);
                printf("the number after operation is %f \n",k);
                printf("---------------------------------------\n");
                w=getch();
            }
        }break ;
    case '*':
        {
            k=x*y ;
            fflush(stdin);
            printf("the number after operation is %f \n",k);
            printf("---------------------------------------\n");
            w=getch();

        }break;
    case '/' :
        {
           k=x/y ;
           fflush(stdin);
           printf("the number after operation is %f \n",k);
           printf("---------------------------------------\n");
           w=getch();
        }break ;
    default :
        {
            printf("pleas check the operation\n");
            printf("---------------------------------------\n");
            w=getch();
        }
    }
    while(w==ESC)
    {
        system("cls"); // clear screen
        SetConsoleTextAttribute(hStdOut,0x0D);


    gotoxy(3,2);
    printf(" Pleas select one from This choice \n");
    gotoxy(3,3);
    printf("--------------------------------------\n\n\n");


    for(i=0;i<ITEMS2;i++)
    {
        if(i==currentchoice)
        {
          SetConsoleTextAttribute(hStdOut,0x0A);
          //gotoxy(7+(5*i),4);
          printf("%s",menu2[i]);
          printf("\t");
        }
        else
        {

        SetConsoleTextAttribute(hStdOut,0x02);
        //gotoxy(7+(5*i),4);
        printf("%s",menu2[i]);
        printf("\t");
        }
    }
    mychar2=getch();
    if(mychar2==NULL)
        {
            mychar2=getch();
        }

    switch(mychar2)
    {
        case RIGHT :
        {

           switch(currentchoice)
              {
                  case 0 :
                    {
                        currentchoice=1;
                    }break ;
                  case 1 :
                    {
                        currentchoice=0;
                    }break ;
                }
        }break;

          case LEFT :
            {
                switch(currentchoice)
                {
                    case 0 :
                      {
                          currentchoice=1;
                      }break ;
                    case 1 :
                        {
                            currentchoice=0;
                        }break ;
                }
            }break;
        case ENTER :
         {
                 switch(currentchoice)
                 {
                     case 0 :
                       {
                           system("cls");
                           w=1;
                           //getch();

                       }break ;
                     case 1 :
                        {
                            system("cls");
                            w=1;
                            quitFlag=1 ;
                           // getch();
                        }break ;
                 }

         }break ;
                     case ESC :
                        {
                                                      system("cls");
                            //gotoxy(4,2);
                                do
                                {

                                SetConsoleTextAttribute(hStdOut,0x03);
                                printf("enter the first number : ");
                                fflush(stdin);
                                scanf("%f",&x);
                                fflush(stdin);
                                printf("enter the second number : ");
                                fflush(stdin);
                                scanf("%f",&y);
                                printf("enter any operation from this (+) (-) (/) (*) : ");
                                fflush(stdin);
                                scanf("%c",&operation_system);
                                fflush(stdin);
                                quitFlag=calculator(x,y,operation_system);
                                 if(quitFlag==1)
                                    w = ESC;
                                 else
                                    w = 1;
                                }while(w==ESC);
                        }

    }

  //}while(w!=ESC);

}return quitFlag;
}


int magicbox(int size)
{
    int i,j=0;
    int row,col;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    do
    {
     row=1;
     col=(size+1)/2;

    if(size%2!=0)
    {
        j++;
    }
    else
    {
        printf("invalid number the size of the magic box should be odd\n");
        SetConsoleTextAttribute(hStdOut,0x01);
        printf("pleas enter the size of magic box : ");
        scanf("%d",&size);

    }
    }while(j==0);
     system("cls");
    for(i=1;i<=size*size;i++)
    {
        gotoxy(col*5+10,row*2+2);
        printf("%d",i);
        if(i%size!=0)
        {
            col=col-1;
            row=row-1;
        }
        if(i%size==0)
        {
            row++;
        }
        if(row==0)
        {
            row=size;
        }
        if(col==0)
        {
            col=size;
        }

    }
    getch();
    printf("\n\n Pleas Try to make the Magic Box by your hand and make ");
    printf("\n           this solution as a reference to you ");
    getch();

}
