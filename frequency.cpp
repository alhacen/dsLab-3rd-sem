#include<stdio.h>
  int main()
 {long int n,d;
  int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f0=0;
  printf("enter the number");
  scanf("%ld",&n);
   while(n!=0)
   { d=n%10;
  switch(d)
  { case 1: f1++;
    break;
    case 2: f2++;
	break; 
    case 3: f3++;
    break;
    case 4: f4++;
    break;
    case 5: f5++;
    break;
    case 6: f6++;
    break;
    case 7: f7++;
    break;
    case 8: f8++;
    break;
    case 9: f9++;
    break;
    case 0: f0++;
    break;

    } 
    n=n/10;
 }
 printf("frequency of 0 %d \n",f0);
 printf("frequency of 1 %d \n",f1);
 printf("frequency of 2 %d \n",f2);
 printf("frequency of 3 %d \n",f3);
 printf("frequency of 4 %d \n",f4);
 printf("frequency of 5 %d \n",f5);
 printf("frequency of 6 %d \n",f6);
 printf("frequency of 7 %d \n",f7);
 printf("frequency of 8 %d \n",f8);
 printf("frequency of 9 %d \n",f9);
 
 return 0;
 }

