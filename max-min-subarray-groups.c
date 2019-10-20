#include<stdio.h>
#include<stdlib.h>

void maximum(int* a, int n)
{
    int *p;
    int max=0,i,k,o,z,a1,z1,j,dis,sum;
    p=(int*)malloc(n*sizeof(int));
    k=0;o=n;
    for(i=0;i<n;i++,k++,o--)
    {   
        for(j=0;j<n-k;j++)
        {
            sum=0;
            for(z=0,a1=j;z<=n-o;z++,a1++)
                sum+=a[a1];
            if(max<=sum)
            {
                max=sum;
                for(z1=0,a1=j;z1<=n-o;z1++,a1++)
                    p[z1]=a[a1];
            }
         }
     }
     printf("MAX: %d",max);
     for(dis=0;dis<z1;dis++)
     {
        printf("\t%d",p[dis]);
     }
}

void minimum(int* a, int n)
{
    int *p;
    int max=0,i,k,o,z,a1,z1,j,dis,sum;
    p=(int*)malloc(n*sizeof(int));
    k=0;o=n;
    for(i=0;i<n;i++,k++,o--)
    {   
        for(j=0;j<n-k;j++)
        {
            sum=0;
            for(z=0,a1=j;z<=n-o;z++,a1++)
                sum+=a[a1];
            if(max>=sum)
            {
                max=sum;
                for(z1=0,a1=j;z1<=n-o;z1++,a1++)
                    p[z1]=a[a1];
            }
         }
     }
     printf("MAX: %d",max);
     for(dis=0;dis<z1;dis++)
     {
        printf("\t%d",p[dis]);
     }
}


main()
{ 
    int arr[50];
    int n,i;
    int ch;
    while(1)
    {
        printf("\n1.to find max numbers and its sub array   \n2. to find min number and its sub groups  \n3. exit   \n--> enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter size of the array :");
                    scanf("%d",&n);
                    printf(" enter your elements : ");
                       for(i=0;i<n;i++)
                            {
                              scanf("%d",&arr[i]);
                            }
                                 maximum(arr,n);
            break;

            case 2: printf("enter size of the array :");
                    scanf("%d",&n);
                    printf(" enter your elements : ");
                    for(i=0;i<n;i++)
                     {
                         scanf("%d",&arr[i]);
                     }
                          minimum(arr,n);
            break;

            case 3:exit(0);
            break;

            default : printf("wrong choice !");
        }
    }
    
}
