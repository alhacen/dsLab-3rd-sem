#include<stdio.h>
#include<stdlib.h>

 int valid_date(int x,int y,int z);


int main()
  {  int day1,mon1,year1,
         day2,mon2,year2;
         int day_diff,mon_diff,year_diff;
         printf("enter 1st date (dd/mm/yyyy):");
         scanf("%d/%d/%d",&day1,&mon1,&year1);
         printf("enter 2nd date (dd/mm/yyyy):");
         scanf("%d/%d/%d",&day2,&mon2,&year2);
         if(!valid_date(day1,mon1,year1))
           {printf("first date is invalid.\n");
             
           }
          if(!valid_date(day2,mon2,year2))
		    { printf("second date is invalid .\n");
		     exit(0);
		     
			 } 
       if(day2<day1)
       {if(mon2==3)
          { if((year2%4==0 && year2%100!=0) || (year2%400==0))
            { day2 +=29;
		      }
		 else
		  {day2 +=28;
		  } 
	   }
     else if(mon2==5||mon2==7||mon2==10||mon2==12)
	     {day2 +=30;
	      }
		  else 
		  { day2 +=31;}
		  mon2=mon2-1;
		  	   
    }
    
    if(mon2<mon1)
    {mon2+=12;
    year2-=1;
	}
	day_diff=day2-day1;
	mon_diff=mon2-mon1;
	year_diff=year2-year1;
	printf("difference :%d/%d/%d",day_diff,mon_diff,year_diff);
	
	return 0;
	
}

int valid_date(int day,int mon,int year)
  { int is_valid=1,is_leap=0;
  if(year>=1800&&year<=9999)
  {
    if((year%4==0&&year%100!=0)||(year%400==0))
     {
	 is_leap=1;
     }
  if(mon>=1&&mon<=12)
    { if(mon==2)
      { if(is_leap && day==29)
   
        {is_valid=1;
      	}
      else if(day>28)
	  {is_valid=0;
	   }
 }
else if(mon==4||mon==6||mon==9||mon==11)
  {  if (day>30)
       {is_valid=0;
	   }
	}	
	
	else if(day>31)
	{is_valid=0;
	}
 }
 else
    {is_valid=0;
       }
       
      if(day<1||day>31)
	  { is_valid=0;
	   } 
       return is_valid;
   }
 }
