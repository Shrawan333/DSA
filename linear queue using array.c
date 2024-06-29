//Static (Array) Implementation of Linear Queue
#include <stdio.h>
#include<stdlib.h>
#define MAX 5

int linear_queue[MAX];
int r = -1, f = -1;

//function declaration/prototype
void enqueue(int);
void dequeue();
void display();
int is_full();
int is_empty();
void peek();
void count();


int main()
{
    int choice, data;
    while(1){
    printf("\nEnter \n1 for Enqueue \n2 for Dequeue \n3 for Display \n4 for count\n5 for peek \n6 for Exit: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            if(!is_full())
            {
                printf("\nEnter data: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            }
            else
            {
                printf("\nQueue overflow...");
            }
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
            case 4:
            	count();
            	break;
             case 5:
             	peek();
             	break;
            	
        case 6:
            exit(0);
        default:
            printf("\nInvalid Choice...");
    }
    }
    return 0;
}

//function definition
void enqueue(int value)
{
    if(is_full())
    {
        printf("\nQueue overflow...");
        return;
    }
    else if(is_empty())
    {
        r = r + 1;
        f = f + 1;
    }
    else
    {
        r = r + 1;
    }
    linear_queue[r] = value;
    printf("\n%d is enqueued successfully.", linear_queue[r]);
}

int is_empty()
{
    if(r==-1 && f==-1)
        return 1;
    else
        return 0;
}

int is_full()
{
    if(r == MAX-1)
        return 1;
    else
        return 0;
}

void dequeue()
{
    if(is_empty())
    {
        printf("\nQueue Underflow...");
        return;
    }
    else if(r == f)
    {
        printf("\n%d is dequeued successfully.", linear_queue[f]);
        r = -1;
        f = -1;
    }
    else
    {
        printf("\n%d is dequeued successfully.", linear_queue[f]);
        f++;
    }
}

void display()
{
    int i;
    if(is_empty())
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nThe elements in the queue are: ");
        for(i=f; i<=r; i++)
        {
            printf("%d\t", linear_queue[i]);
        }
    }
}
void peek()
{
	if( f==-1 && r==-1 )
	{
		printf("queue underflow");
	}
		else{
			printf("%d",linear_queue[f]);
		}
	}
void count()
{
	
}
