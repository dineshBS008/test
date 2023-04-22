#include<stdio.h>
#include<stdlib.h>

// Macro introduced for max. size of queue
#define MAXSIZE 5   /* [0] [1] [2] [3] [4] */

// initial conditions
int rear=-1,front=0;            // rear means paxxadiko front ultimatley means aagadhiko
int queue[MAXSIZE];             // queue i.e. done by array method means its static data type
int item;

/*
//declration of function (prototype)
void enqueue();
void dequeue();
void display(); 
*/

// defination of function
void enqueue()
{
    if(rear>=MAXSIZE-1) // -1 to 4 >= 4   rear>4 initial condition  i.e. empty vako case ma run hunu parxa
    {
        printf("Queue is full and overflow condition");
    }
    else            // rear le empty lai point gareko xa so it is elligible for inserting datas
    {
        printf("\nEnter the value of item:");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;       // rear starts from  [0] [1] [2] [3] [4]
    }
}

void dequeue()
{
    if(front>rear)  // 0 > -1 element insert na gareko case , in max case rear value==4 
    {
        printf("\nQueue is empty and underflowcondition");
    }
    else
    {
        front=front+1;
        item=queue[front];
    }
}

void display()  // displaying the items in FIFO manner
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
        /* printf("\n%d\n",queue[i]); */   // or this samething
    }
}

int main()          // As its top-down approach so from down to top
{
    int ch;
    printf("Enter your choice:\n");
    while(1)  // 1 for boolean and while is infinte loop ram full then stops or exit option    aka while true huda sammma i.e infinite loop
    {
        printf("\nEnter:");
        printf("\n1 for Insertion \n2 for Deletion \n3 for Display \n4 for EXIT:\n=>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:          // why this?
            exit(0);         // it exits infinite while loop
            break;
            
            default:
            printf("Entered number is invalid");
        }
    }
    return 0;
}

