#include<stdio.h>
#include<stdlib.h>

struct node
 {int info;
  struct node *next;
  struct node *prev;
 };
  
   struct node *emplist(struct node * start,int data);
   struct node *beg(struct node *start,int data);
   struct node *end(struct node * start ,int data);
   struct node *nposition(struct node * start,int data,int position);
    void disp (struct node *start);
    void delbeg(struct node * start);
    void delend(struct node *start );
    void delnposition(struct node * start,int position);
   
    int main()
    {  
      struct node * start=NULL;
       int ch1,ch ,data,position;
      
      
	  while(1)
	  {
	    
                 printf("\t 1. insert \t 2. delete \t 3. display \t 4. end program \n");
                 printf(" \t enter your choice :- ");
                 scanf("%d",&ch);
                  if (ch==1)
             {
                 	printf("\t 1.insert in an empty list");
        	        printf("\t 2.insert at begining");
        	        printf("\t 3.insert at end");
        	        printf("\t 4.insert at nth position \n");
                    printf("\t enter your choice :-");
        	        scanf("%d",&ch1);
        	
        	      switch(ch1)
        	    {
        		     case 1: if (start!=NULL)
        		        {printf(" \tlist is not empty\n");
        		          break;
						}
						printf(" \t enter element:-");
						scanf("%d",&data);
						start=emplist(start,data);
						break;
				     case 2:
				       printf("\t enter element:-");
					   scanf("%d",&data);
					   start=beg(start,data);
					   break;	
				    case 3:
					   printf("\t enter element:-");
					   scanf("%d",&data);
					   start=end(start,data);
					   break;
				    case 4:	 
				       printf("\t enter element:-");
					   scanf("%d",&data);
					   printf("\t enter position:-");
					   scanf("%d",&position);
					   start=nposition(start,data,position);
					   break;
				   
		     	}
		     	
	      }
	      
		
    
     
           else if (ch==2)
            { 
        
        
         	    printf("\t 1. delete begining node");
         	    printf("\t 2. delete end node");
         	    printf("\t 3. delete node at nth position");
         	    printf("\n \t enter your choice :-");
            	scanf("%d",&ch1);
         	
         	    switch(ch1)
         	       {
         	          case 1:
			          delbeg(start);
			          break;
			          
			          case 2:
			  	      delend(start);
			  	      break;
			  	      
			        case 3:
			  	      printf("\t enter position :-");
			  	      scanf("%d",&position);
			  	      delnposition(start,position);
			  	      break;
			  	
			  	      
			  	   }
					 
      		 }
      		 
      		
			 else if(ch==4)
			 {   printf("\n \t ####  Thanks for using this program   ####\n");
		         exit(0);			
		     }
		     
		     else if(ch==3)
		     {  disp(start); }
		   
		     else
		     { printf(" It's a wrong choice !\n"); }
      		 
      }
        
	 return 0;	
	}
	
	struct node *emplist(struct node *start, int data)
	{
		struct node * tmp;
		tmp=(struct node*)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->prev=NULL;
		tmp->next=NULL;
		start=tmp;
		return start;
	}
	
	
    struct node *beg(struct node *start, int data)
	{
		struct node * tmp;
		tmp=(struct node*)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->prev=NULL;
		tmp->next=start;
		start->prev=tmp;
		start=tmp;
		return start;
	}
	
		struct node *end(struct node *start, int data)
	{
		struct node * p,* tmp;
		tmp=(struct node*)malloc(sizeof(struct node));
		tmp->info=data;
		p =start;
		while(p->next!=NULL)
		{ p=p->next;
		}
	   p->next=tmp;
	   tmp->next=NULL;
	   tmp->prev=p;
	   return start;	
	}
	
		struct node *nposition(struct node *start, int data,int position)
	{
		int i;
		struct node *p,* tmp;
		tmp=(struct node*)malloc(sizeof(struct node));
		tmp->info=data;
		if(position==1)
		{
		 tmp->prev=NULL;
		 tmp->next =start;
		 start->prev =tmp;
		 start=tmp;
		 return start;
		}
		
		p=start;
		for(i=1;i<position-1 && p!=NULL;i++)
		{
			 p=p->next;
		}
		if(p==NULL)
		{
			printf("\t there are less than %d elements\n",position);
		}
		
		else
		{ tmp->prev=p;
		  tmp->next=p->next;
		  if(p->next!=NULL)
		     p->next->prev=tmp;
		     p->next=tmp;
     	}
		
	}
	
    void delbeg(struct node*start)
	{ struct node *tmp;
	  tmp=start;
	  start=tmp->next;
	  start->prev=NULL;
	  tmp->next=NULL;
	  free(tmp);
    }
	
	    void delend(struct node*start)
	   {   struct node *p;
	       struct node * tmp;
	       p=start;
	      while(p->next->next!=NULL)
	        {
	 	        p=p->next;
	        }
	       
	         tmp=p->next;
	         p->next=NULL;
	         free(tmp);
	 
	    }
	
	
	      void delnposition(struct node*start, int position)
	      {struct node *p,*tmp;
	         int i;
	         p=start;
	         for(i=1;i<position-1;i++)
          	 {p=p->next;
	         }
	          tmp=p->next;
	           p->next=tmp->next;
	           tmp->next->prev=tmp->prev;
	            free(tmp);
	
	       }
	
	
	
	void disp(struct node* start)
	{ struct node *p;
	  if(start==NULL)
	  {printf("\t list is empty\n");
	  }
	  p=start;
	  printf("\n \t list:- \t");
	  while(p!=NULL)
	  {printf("%d\t",p->info);
	   p=p->next;
	  }
	  printf("\n");
	}
	
	
	
	
