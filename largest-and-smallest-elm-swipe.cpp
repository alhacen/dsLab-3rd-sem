#include<iostream>
#define MAX 5000

int largest =-500000;
int smallest =500000;

void swapi(int a, int b , int* A){
	int temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

void swaparr(int A[], int size){
	int largesti = 0 , smalllesti = 0,i;		
	for(i = 0; i < size ;i++){
		if(A[i] >  largest) {
			largest = A[i]; 
			largesti = i;
		}
		if(A[i] <  smallest) {
			smallest = A[i]; 
			smalllesti = i;
		}
	}
	swapi(largesti, smalllesti, A);
}

void printArr(int* A, int size){
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", *(A+i));
	}
}

int main(){
	int A[MAX], i, size;
	printf("Enter the size of the array\n");
	scanf("%d", &size);
	printf("Enter the elements of the array\n" );
	for (int i = 0; i < size; ++i){
		scanf("%d", &size);
	}
	swaparr(A, size);
	printf("\nArray after the swaping of largest and smallest elements is: \n");
	printArr(A , size);
}