#include<stdio.h>
#include<stdlib.h>


void deciToOct(){
	float num;
	
	int A[8];
	int beforeDecimal = 0;
	printf("Enter the number: ");
	scanf("%f", &num);
	int integer = num;
	int i = 1;
	float decimal =num - integer; 
	
	while(integer != 0){
		beforeDecimal += (integer%8) *i;
		integer /= 8;
		i *=10;
	}
		printf("%d.", beforeDecimal);
	

	for(i = 0; i < 8 ; ++i ){
		decimal *=8;
		int val = decimal;
		A[i] = val; 	
		decimal  -= val;
	}
	for(i = 0 ; i <8 ; ++i){
		printf("%d", A[i]);
	}
	
	printf("\n\n");
}
void deciToBin(){
		float num;
	
	int A[8];
	int beforeDecimal = 0;
	printf("Enter the number: ");
	scanf("%f", &num);
	int integer = num;
	int i = 1;
	float decimal =num - integer; 
	
	while(integer != 0){
		beforeDecimal += (integer%2) *i;
		integer /= 2;
		i *=10;
	}
	printf("%d.", beforeDecimal);
	

	for(i = 0; i < 8 ; ++i ){
		decimal *=2;
		int val = decimal;
		A[i] = val; 	
		decimal  -= val;
	}
	for(i = 0 ; i <8 ; ++i){
		printf("%d", A[i]);
	}
	
	printf("\n\n");
}

void deciToHex(){
	float num;
	
	char A[10], B[10];
	int beforeDecimal = 0;
	printf("Enter the number: ");
	scanf("%f", &num);
	int integer = num;
	int i = 0;
	float decimal =num - integer; 
	while(integer != 0){
		int temp = 0;
		temp = integer%16;
		if(temp < 10){
			A[i++] = temp + 48;
		}
		else{
			A[i++] = temp + 55;
		}
		integer /=16;
	}
	int j;
	for(j = i-1; j >= 0 ; j--){
		printf("%c",A[j]);
	}
	printf(".");
	for(i = 0; i < 8 ; ++i ){
		decimal *=16;
		int val = decimal;
		if(val < 10)
			B[i] = val + 48;
		else
			B[i] = val + 55;
		decimal -= val;
	}
	for(i = 0; i < 8; ++i){
		printf("%c",B[i]);
	}
}


int main(){
	int ch1;
	while(1){
	printf("\nWhat do you want to do?\n");
	printf("1. Decimal to Octal\t2.Decimal to HexaDecimal\t3.Decimal to Binary\t");	
	scanf("%d",&ch1);
		switch(ch1){
			case 1: 
				deciToOct();
				break;
			case 2:
				deciToHex();
				break;
			case 3:
				deciToBin();
				break;
			case 4:
			 	return 0;
			 default:
			 	printf("Enter the value Between 1-4 please");
		}
	}
	return 0;
}
