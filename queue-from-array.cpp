#include<stdio.h>
#include<stdlib.h>

#define N 10
void insert();
void delete_();
void display();
int arr[N];
int rear =-1;
int front =-1;

int main()
{   int c;
     while(1)
       {  printf("\n 1.insert 2.delete 3.display 4.exit");
          printf("\n\n enter your choice ");
          scanf("%d",&c);
          switch(c)
             { case 1: insert();
                        break;
               case 2: delete_();
			            break;
			   case 3: display();
			            break;
			   case 4: exit(1);
			            break;
			   default: printf("\n wrong choice ");									
						
			}
       	 }
  return 0;     	 
}


void insert()
{      int data;
        if(rear==N-1)
         printf("queue overflowed\n");
        else
		 { if (front==-1)
		    front=0;
		     printf("insert the element in the queue");
		     scanf("%d",&data);
		     rear=rear+1;
		     arr[rear]=data;
		 }
}
   
void delete_()
{  if (front==-1 && front>rear)
       { printf("queue is underflowed\n");
        return;
	   }
	else
	{     if(rear==-1)
	      printf("queue is empty");
	      else
	      {printf("element deleted from queue ");
	       front +=1;
	      }
	}   
}

void display()
{  int i;
    if (rear==-1)
       printf("\n queue is empty\n");
    else
       { printf("\n\n queue is :\n");
         printf(" front-> [");
         for(i=front; i<=rear;i++)
         printf("%d | ",arr[i]);
       //  printf("%d",arr[rear]);
         printf("] <-rear");
         printf("\n");
	   }  
}   
   
   
   
   
