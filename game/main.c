# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <windows.h>

# define ENTER 13
# define ESC 27
# define TAB 9

# define UP 72
# define DOWN 80
# define END 79
# define HOME 71

# define STARTROW 3
# define STARTCOL 1
# define ITEMS 3

void gotoxy(int ,int );

int main()
{
    char menu[ITEMS][11] = {"New Game" ,"Your score" ,"Exit"} ;
    char q,E, myChar;
    int currentChoice = 0 ;
    int quitFlag=0 ;
    int j ;
    int x=1,y,z,i,c,f=0,o=0,len;
    char str1[10],str2[10]="smart",str3[10]="timer",str4[10]="happy",str5[10]="noise",str6[10]="black",str7[10];
    WORD wColorNorm =0x02; // A word is an integer number of bytes for example, one, two, four, or eight 32 bits ex
    WORD wColorHigh =0x0a;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);



    //This is used to reset the carat/cursor to the top left
    // file pointer to screen
    do
    {
        system("cls"); // clear screen
        SetConsoleTextAttribute(hStdOut,0x0c);
        gotoxy(20,1) ;
        printf(" *.* Welcome In 5 Words Game *.*");
        gotoxy(20,2);
        printf("----------------------------------");
        printf("\n");
        gotoxy(70,20);
        SetConsoleTextAttribute(hStdOut,0x0E);
        printf("By: Mohmed Abdallah Ragab");
        printf("\n");
        for(j=0; j<ITEMS; j++)
        {
            SetConsoleTextAttribute(hStdOut,wColorNorm);
            gotoxy(STARTCOL,STARTROW+j) ;
            if(j == currentChoice)
            {
                SetConsoleTextAttribute(hStdOut,wColorHigh);
                printf(menu[j]);
            }
            else
            {
                printf(menu[j]);
            }
        }
        myChar=getch();
        if(myChar==-32)
            myChar=getch();

        switch(myChar)
        {
        case UP :
        {

            switch(currentChoice)
            {
            case 0 :
            {
                currentChoice = 2;
            }
            break;
            case 1 :
            {
                currentChoice = 0;
            }
            break;
            case 2 :
            {
                currentChoice = 1;
            }
            break;
            }
        }
        break;
        case DOWN :
        {
            switch(currentChoice)
            {
            case 0 :
            {
                currentChoice = 1;
            }
            break;
            case 1 :
            {
                currentChoice = 2;
            }
            break;
            case 2 :
            {
                currentChoice = 0;
            }
            break;
            }
        }
        break;
        case END :
        {
            currentChoice = 2;
        }
        break;
        case HOME :
        {
            currentChoice = 0;
        }
        break;
        case ENTER :
        {
            system("cls");
            SetConsoleTextAttribute(hStdOut,0x0c);
            switch(currentChoice)
            {
            case 0:
            {
                x=1;
                SetConsoleTextAttribute(hStdOut,wColorNorm);
                gotoxy(0,2);
                printf("Please Enter Your Name\n ");
                fflush(stdin);
                E=getch();
                SetConsoleTextAttribute(hStdOut,wColorHigh);
                if(E==ESC)
                {
                    printf("\nDo you want to exit the game ? (Y,N) : ");
                    SetConsoleTextAttribute(hStdOut,0x0c);
                    E=getch();
                    if(E=='Y')
                        x=0;
                    else
                    {
                        system("cls");
                        SetConsoleTextAttribute(hStdOut,wColorNorm);
                        gotoxy(0,2);
                        printf("Please Enter Your Name\n ");
                        fflush(stdin);
                        SetConsoleTextAttribute(hStdOut,wColorHigh);
                        printf("--> ");
                        gets(str7);
                    }
                }
                while(x!=0)
                {
                    printf("--> ");
                    gets(str7);
                    SetConsoleTextAttribute(hStdOut,wColorNorm);
                    printf("How many game you want to play?'not more 5'\n ");
                    E=getch();
                    SetConsoleTextAttribute(hStdOut,wColorHigh);
                    if(E==ESC)
                    {
                        printf("\nDo you want to exit the game ? (Y,N) : ");
                        SetConsoleTextAttribute(hStdOut,0x0c);
                        E=getch();
                        if(E=='Y')
                            x=0;
                        else
                        {
                            system("cls");
                            SetConsoleTextAttribute(hStdOut,wColorNorm);
                            printf("How many game you want to play?'not more 5'\n ");
                            SetConsoleTextAttribute(hStdOut,wColorHigh);
                            printf("--> ");
                            scanf("%d",&i);
                        }
                    }
                    while(x!=0)
                    {
                        printf("--> ");
                        scanf("%d",&i);
                        system("cls");
                        for(z=0; z<i; z++)
                        {
                            c=10;
                            do
                            {
                                system("cls");
                                fflush(stdin);
                                if(z==1)
                                    strcpy(str2,str3);
                                if(z==2)
                                    strcpy(str2,str4);
                                if(z==3)
                                    strcpy(str2,str5);
                                if(z==4)
                                    strcpy(str2,str6);
                                SetConsoleTextAttribute(hStdOut,wColorNorm);
                                printf(" Write The Hiden Word (*****)\n ");
                                printf("Choose Alpha for(s,b,a,i,t,p,k,l,t,m,o,r,e,c,n,h,y)\n");
                                printf("Entr The word\n ");
                                fflush(stdin);
                                E=getch();
                                SetConsoleTextAttribute(hStdOut,wColorHigh);
                                if(E==ESC)
                                {
                                    printf("\nDo you want to exit the game ? (Y,N) : ");
                                    SetConsoleTextAttribute(hStdOut,0x0c);
                                    E=getch();
                                    if(E=='Y')
                                        x=0;
                                    else
                                    {
                                        SetConsoleTextAttribute(hStdOut,wColorNorm);
                                        printf(" Write The Hiden Word (*****)\n ");
                                        printf("Choose Alpha for(s,b,a,i,t,p,k,l,t,m,o,r,e,c,n,h,y)\n");
                                        printf("Entr The word\n ");
                                        fflush(stdin);
                                        SetConsoleTextAttribute(hStdOut,wColorHigh);
                                        printf("--> ");
                                        gets(str7);
                                    }
                                }
                                while(x!=0)
                                {
                                    printf("--> ");
                                    gets(str1);
                                    len = strlen(str1);
                                    x= strcmp(str1,str2);
                                    if(x==0)
                                    {
                                        SetConsoleTextAttribute(hStdOut,0x0E);
                                        printf("**Congratulation!!** The Word Is Right\n");
                                    }

                                    else
                                    {
                                        c--;
                                        printf("the word is wrong\n");

                                        for(y=0; y<len; y++)
                                        {
                                            if(str1[y]==str2[y])
                                            {
                                                SetConsoleTextAttribute(hStdOut,0x0c);
                                                printf("You Enter The Alpha Number %d Right\n",y+1);
                                            }
                                        }
                                        SetConsoleTextAttribute(hStdOut,wColorHigh);
                                        printf("You Can Try Again\n");

                                    }

                                    getch();
                                }

                            }
                            while(x!=0&c!=0);
                            o+=c;
                            f+=10;
                        }
                    }
                }
            }
            break;
            case 1 :
            {

                system("cls");
                SetConsoleTextAttribute(hStdOut,0x03);
                printf("%s   ",str7);
                printf("your score is (%d / %d)",o,f);
                printf("\n");
                do
                {
                    q=getch();
                }
                while(q!=ESC&q!=ENTER);
            }
            break;
            case 2 :
            {
                quitFlag =1;
            }
            break;
            }

        }
        break;
        case ESC :
        {
            quitFlag =1;
        }
        break;

        }
    }
    while(quitFlag==0);
    SetConsoleTextAttribute(hStdOut,0x07); 	// Set Screen To Normal colors before Quitting
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
