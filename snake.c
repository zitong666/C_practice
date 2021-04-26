#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define DOWN_WALL 20
#define RIGHT_WALL 58

typedef struct s_snake   //define the structure of snake
{
    int x;
    int y;
    struct s_snake *next;
}Snake;

Snake *head, *end;
Snake *p;
void SetPos(int x, int y);
void DrawFrame();
void Welcome();
void InitSnake();


int main()
{
    Welcome();
    //printf("1Finish\n");
    DrawFrame();
    //printf("2Finish\n");
    InitSnake();
    //printf("3Finish\n");

    SetPos(60,7);
    printf("Score *");
    SetPos(60,8);
    printf("Speed *");
    SetPos(60,9);
    printf("increase speed for per 30 score");
    SetPos(60,10);
    printf("no wall no");
    SetPos(60,11);
    printf("space for pause/start");
    system("pause");
    //system("cls");
    return 0;
    
}

void SetPos(int x, int y)
{
    COORD pos = {x,y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output,pos);
}

void Welcome()
{
    SetPos(25,8);
    printf("Snake Game  THL_ZZZ");
    SetPos(25,11);
    printf("Rule of the game");
    SetPos(25,12);
    printf("No Rules");
    SetPos(25,13);
    printf("Space to start and pause");

    printf("\n");
    SetPos(30,15);
    system("pause");
    system("cls");
}

void DrawFrame()
{
    int i = 0;
    for (i = 0; i < 60; i+=2)
    {
        SetPos(i,0);
        printf("-");
        SetPos(i,DOWN_WALL);
        printf("-");
    }
    for (i = 1; i < DOWN_WALL;i++)
    {
        SetPos(0,i);
        printf("|");
        SetPos(RIGHT_WALL,i);
        printf("|");
    }
       
}

void InitSnake()
{
    int i = 0;
    //我看一下动态内存分布再继续写。。。
    //init the location of the snake
    end = (Snake*)malloc(sizeof(Snake));
    end->x = 20;
    end->y = 15;
    end->next=NULL;
    //free(end);

    //init three body location
    for (i=1;i<=3;i++)
    {
        head = (Snake*)malloc(sizeof(Snake));
        head->x = 20+2*i;
        head->y = 15;
        head->next = end;
        end = head;
        //free(head);
    }

    //draw snake from the head
    while(end->next = NULL)
    {
        SetPos(end->x,end->y);
        printf("■");
        end = end->next;
    }


}   
