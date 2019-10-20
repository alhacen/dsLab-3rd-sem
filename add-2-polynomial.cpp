 #include<stdlib.h>
 #include<stdio.h>
 
 struct node
   {int coef,exp;
     struct node *next;
     }*new1,*head1=NULL,*p1,*new2=NULL,*head2,*p2;
     
   void create_poly1()
	{  int ch1;
	  printf("\n\t enter 1st polynomial ___");
	  
	   do
	   { new1 =(struct node*)malloc(sizeof(struct node));
	     printf("\n\t enter coefficent and exponent:- ");
	     scanf("%d %d",&new1->coef,&new1->exp);
	     new1->next=NULL;
	     if(head1==NULL)
	       {head1=new1;
	        p1=new1;
		   }
		else
		 { p1->next=new1;
		   p1=new1;
		  }
		  
		 printf("\n\t do yo whant to add more tearm in polynomial 1 ....1.yes  2. no ");
		 printf("\n\t enter your choice :-");
		 scanf("%d",&ch1); 
	   }while (ch1==1);
	 } 
	 
	 	 
	void create_poly2()
	{ char ch2;
	  printf("\n\t enter 2nd polynomial ____");
	  
	   do
	   {new2=(struct node*)malloc(sizeof(struct node));
	     printf("\n\t enter coefficent and exponent :- ");
	     scanf("%d %d",&new2->coef,&new2->exp);
	     new2->next=NULL;
	     if(head2==NULL)
	       {head2=new2;
	        p2=new2;
		   }
		else
		 { p2->next=new2;
		   p2=new2;
		  }
		  
		 printf("\n\t do yo whant to add more tearm in polynomial 2 ....1. yes 2. no ");
		printf("\n\t  enter your choice :-");
		 scanf("%d",&ch2); 
	   }while (ch2==1);
	 
   }
   
   void display_poly1()
   {
   	p1=head1;
   	printf("\n\t 1st polynomial is :- ");
   	while(p1!=NULL)
   	{   printf("%dx^%d",p1->coef,p1->exp);
   	    p1=p1->next;
   	 if(p1!=NULL)
   	   { printf("+");}
	}
   }
   void display_poly2()
   {
   	p2=head2;
   	printf("\n\t 2nd  polynomial is :-");
   	while(p2!=NULL)
   	{   printf("%dx^%d",p2->coef,p2->exp);
   	    p2=p2->next;
   	 if(p2!=NULL)
   	   { printf("+");}
	}
   }
   
   
   
   void add_poly1poly2()
   {  p1=head1;
      p2=head2;
	  while(p1!=NULL&&p2!=NULL)
	  {  if(p1->exp==p2->exp) 
	         { printf("(%d)x^%d",p1->coef+p2->coef,p1->exp);
	           p1=p1->next;
			   p2=p2->next;
	           }
	      else if(p1->exp>p2->exp)
		      {printf("%dx^%d",p1->coef,p1->exp);
		        p1=p1->next;
			  }
		   else
		      {printf("%dx^%d",p2->coef,p2->exp);
		        p2=p2->next;
		   	  }
		    if(p1!=NULL||p2!=NULL)
			  { printf("+");
			   }		 	  
			       
	  }  
	  
	  while(p1!=NULL)
         {   printf("%dx^%d",p1->coef,p1->exp);
             p1=p1->next;
           if(p1!=NULL)
             printf("+");
		  }	  
	  while(p2!=NULL)
         {   printf("%dx^%d",p2->coef,p2->exp);
             p2=p2->next;
           if(p2!=NULL)
             printf("+");
		  }	  
	  
   }
   

   int main()
    {  int x;
      while(1)
      {printf("\n\t 1.input 1st polynomial 2.input 2nd polynomial 3.display 4.add 5.exit ");
       printf("\n\t enter your choice :-");
       scanf("%d",&x);
       
       switch(x)
       { case 1:create_poly1();
                break;
       	
       	 case 2:create_poly2();
       	        break;
       	 case 3:display_poly1();
       	        display_poly2();
       	        break;
       	 case 4: add_poly1poly2();
       	          break;
     	 case 5: printf(" \n\t ****thanks for using this programme **** ");
		         exit(0);	
       	 
     	 default: printf("\n\t ****wrong choice **** ");
       	 	
	   }
     }
  return 0;	  
  }
     

