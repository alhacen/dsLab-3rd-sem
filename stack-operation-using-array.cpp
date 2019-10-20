#include<stdlib.h>
#include<stdio.h>

#define N 5
int stack[N];
int top=-1;

void push()
 {int x;
  printf("\t enter data :-");
  scanf("%d",&x);
   if(top==N-1)
    {printf("\n\t ****stack is full****");}
   else
      { top++;
	   stack[top]=x;
	   }		
 }
void pop()
 {int item;
  if(top==-1)
   { printf("\n\t ****stack is empty****");}
  else
     { item =stack[top];
        top--;
		printf("%d",item);
     }
 }
 
 void peek()
 { if (top==-1)
     {printf("\n\t ****stack is empty****");}
    else 
	  { printf("%d",stack[top]);
	  }
 }
 
 void display()
 { int i;
   if(top==-1)
   {printf("\n\t ****stack is empty****");}
   else 
     { for(i=top;i>=0;i--)
         {printf("\t%d",stack[i]);}
     }
 }
 
 
int main()
{
	int ch;
	
	 while (1)
	   { printf("\n\t 1.push 2.pop 3.peek 4.display 5.exit\n");
	     printf("\t enter your choice :-");
	     scanf("%d",&ch);
	      switch(ch)
	        { case 1: push();
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
