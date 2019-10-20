#include<stdlib.h>
#include<stdio.h>

struct node
{int data;
 struct node * next;
};
struct node * top=0;
void push(int x)
 { struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;		
 }
void pop()
 { struct node*tmp;
    tmp=top;
    if(top==0)
    {printf("\n\t stack is empty");
	}
	else
	{printf("\n\t%d",top->data);
	 top=top->next;
	 free(tmp);
	}
}
 
 void peek()
 { if (top==0)
     {printf("\n\t ****stack is empty****");}
    else 
	  { printf("\n\t top element is :-%d",top->data);
	  }
 }
 
 void display()
 { struct node *tmp;
   tmp=top;
   if(top==0)
   {printf("\n\t stack is empty");}
   else
   {      while (tmp!=0)
         { printf("\t %d",tmp->data);
          tmp=tmp->next;
          }
   }
 }
 
 
int main()
{
	int ch,y;
	
	 while (1)
	   { printf("\n\t 1.push 2.pop 3.peek 4.display 5.exit\n");
	     printf("\t enter your choice :-");
	     scanf("%d",&ch);
	      switch(ch)
	        { case 1: printf("\n\t enter the data:-") ;
	                  scanf("%d",&y);
		              push(y);
	                  break;
	          case 2: pop();
			          break;
			  case 3: peek();
			          break;
			  case 4: display();
			          break;
			  case 5: printf("\n\t**** Thanks for using this program****"); 
			         exit(0);
			  
			  default: printf("\n\t**** Wrong choice ****") ;
		   }
	   }
  return 0;
 }			  
