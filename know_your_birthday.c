#include <stdio.h>
#include <stdlib.h>
typedef struct LinkedList
{
    char Name[15];
    int Date;
    int Month;
    int Year;
    struct LinkedList *next;
}house;
house *head=NULL, *temp = NULL;
Date_Search()
{
    int low_D = 1;
    int high_D = 31;
    int mid_D;
    char press, L, S, E;
    while(1){
        mid_D = (low_D + high_D)/2;
        printf("\nYour date is Large/Small/Equal to this number %d ...?\n",mid_D);
        printf("If Large press L\n");
        printf("If Small press S\n");
        printf("If Equal press E\n");
        scanf("%c", &press);
        if(press == 'E'){
            break;
        }
        else if(press == 'L'){
            low_D = mid_D + 1;
        }
        else if(press == 'S'){
            high_D = mid_D - 1;
        }
    }
    return mid_D;
}
Month_Search()
{
    int low_M = 1;
    int high_M = 12;
    int mid_M;
    char press, L, S, E;
    while(1){
        mid_M = (low_M + high_M)/2;
        printf("\nYour month is Large/Small/Equal to this number %d ...?\n",mid_M);
        printf("If Large press L\n");
        printf("If Small press S\n");
        printf("If Equal press E\n");
        scanf("%c", &press);
        if(press == 'E'){
            break;
        }
        else if(press == 'L'){
            low_M = mid_M + 1;
        }
        else if(press == 'S'){
            high_M = mid_M - 1;
        }
    }
    return mid_M;
}
Year_Search()
{
    int low_Y = 1950;
    int high_Y = 2050;
    int mid_Y;
    char press, L, S, E;
    while(1){
        mid_Y = (low_Y + high_Y)/2;
        printf("\nYour year is Large/Small/Equal to this number %d ...?\n",mid_Y);
        printf("If Large press L\n");
        printf("If Small press S\n");
        printf("If Equal press E\n");
        scanf("%c", &press);
        if(press == 'E'){
            break;
        }
        else if(press == 'L'){
            low_Y = mid_Y + 1;
        }
        else if(press == 'S'){
            high_Y = mid_Y - 1;
        }
    }
    return mid_Y;
}
insert(int date, int month, int year)
{
    house *newNode = malloc(sizeof(house));
    scanf("%s",newNode->Name);
    newNode->Date=date;
    newNode->Month=month;
    newNode->Year=year;
    newNode->next=NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        temp = head;
        while( temp -> next != NULL){
            temp = temp -> next;
        }
        temp = newNode;
    }
}
void display()
{
    temp = head;
    printf("\nHey! %s your DOB: %d. %d. %d\n", temp->Name,temp->Date,temp->Month,temp->Year);
    temp = temp -> next;
}
int main()
{
    int date,year,month;
    date=Date_Search();
    month=Month_Search();
    year=Year_Search();
    printf("Enter your name:  ");
    insert(date,month,year);
    display();
}
