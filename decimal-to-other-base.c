#include<stdio.h>

void decitobi(){
	int A[8];
	float num;
	int bef_decimal=0;
	printf("enter the no:\n");
	scanf("%f",&num);
	int integer=num;
	int i=1;
	float decimal=num-integer;
	
	while(integer!=0){
		bef_decimal+=(integer%2)*i;
		integer/=2;
		i*=10;
	}
	printf("%d.",bef_decimal);
	
	for(i=0;i<8;i++){
		decimal*=2;
		int val=decimal;
		A[i]=val;
		decimal-=val;
	}
	
	for(i=0;i<8;i++){
		printf("%d",A[i]);
	}
	
	printf("\n\n");
}

//void decitohex(){
//	int A[8];
//	float num;
//	int bef_decimal=0;
//	printf("enter the no:\n");
//	scanf("%f",&num)
//	int integer=num;
//	int i=1;
//	float decimal=num-integer;
//	
//	while(integer!=0){
//		bef_decimal+=(integer%16)*i;
//		integer/=16;
//		i*=10;
//	}
//	printf("%d",bef_decimal);
//	
//	for(i=0;i<8;i++){
//		decimal*=16;
//		int val=decimal;
//		A[i]=val;
//		decimal-=val;
//	}
//	
//	for(i=0;i<8;i++){
//		printf("%d",A[i]);
//	}
//	
//	printf("\n\n")
//}
void decitohex(){
	float num;
	char A[10],B[10];
	int beforedecimal=0;
	printf("enter the number\n");
	scanf("%f",&num);
	int integer =num;
	int i=0;
	
	float decimal=num-integer;
	while(integer!=0){
		int temp=0;
		temp=integer%16;
		if(temp<10){
			A[i++]=temp+48;
		}
		else{
			A[i++]=temp+55;
		}
		
		integer/=16;
	}
	int j;
	for(j=i-1;j>=0;j--){
		printf("%c",A[j]);
	}
	printf(".");
	for(i=0;i<8;i++){
		decimal*=16;
		int val=decimal;
		if(val<10)
		B[i]=val+48;
		else
		B[i]=val+55;
		decimal-=val;
	}
	for(i=0;i<8;i++){
		printf("%c",B[i]);
	}
	
}

void decitooct(){
	int A[8];
	float num;
	int bef_decimal=0;
	printf("enter the no:\n");
	scanf("%f",&num);
	int integer=num;
	int i=1;
	float decimal=num-integer;
	
	while(integer!=0){
		bef_decimal+=(integer%8)*i;
		integer/=8;
		i*=10;
	}
	printf("%d.",bef_decimal);
	
	for(i=0;i<8;i++){
		decimal*=8;
		int val=decimal;
		A[i]=val;
		decimal-=val;
	}
	
	for(i=0;i<8;i++){
		printf("%d",A[i]);
	}
	
	printf("\n\n");
}



int main(){
	int choice;
	printf("enter the choice:\n");
	printf("convert decimal to:\n");
	printf("1.octal     2.binary     3.hexadecimal\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:decitooct();
		break;
		case 2:decitobi();
		 break;
		case 3: decitohex();
		break;
		
	}
	
	return 0;
}
