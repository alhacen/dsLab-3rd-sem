#include<iostream>

class LinkedList
{
	struct Node
	{
		int data;
		Node* next;
		Node* prev;
	};

	Node* head;
	Node* createNewNode(int data){
		Node* newNode = new Node;
		newNode->next = NULL;
		newNode->prev  = NULL;
		newNode->data = data;
		return newNode;
	}
public:
	LinkedList(int data){
		this->head = createNewNode(data);
	}
	LinkedList(){
		this->head = NULL;
	}
	void insertAtStart(int data){
		Node* newNode = createNewNode(data);
		if(this->head == NULL){
				this->head = newNode;
				return;
		}
			newNode->next = this->head;
			newNode->next->prev = newNode;
			this->head = newNode;
			return;
	}
	void insertAtEnd(int data){
		if(this->head == NULL){
			this->head = createNewNode(data);
			return;
		}
		Node* temp = this->head;
		while(temp->next != NULL){
			temp = temp-> next;
		}
		Node* newNode = createNewNode(data);
		temp->next = newNode;
		newNode->prev = temp;
	}
	void insert(int data, int n){	
		Node* temp = this->head;
		Node* newNode = createNewNode(data);
		if(n==1){
			if(this->head == NULL){
				this->head = newNode;
				return;
			}
			newNode->next = this->head;
			newNode->next->prev = newNode;
			this->head = newNode;
			return;
		}

		for (int i = 0; i < n-2; ++i)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
		if(newNode->next != NULL)
			newNode->next->prev = newNode;
	}
	void deleted(int n){
		if(this->head == NULL) return;
		Node* temp1 = this->head;
		Node* temp2;
		for(int i = 0; i < n-2; ++i) 
			temp1 = temp1->next;
		 temp2= temp1->next;
    	temp1->next = temp1->next->next;
    	if(temp2->next!= NULL)
    		temp2->next->prev = temp1;
	}
	void deleteAtStart(){
		if(this->head == NULL) return;
		Node* temp = this->head;
		if(this->head->next == NULL){
			this->head = NULL;
			return;
		}
		this->head = this->head->next;
		this->head->prev = NULL;
		delete (temp);
	}
	void deleteAtEnd(){
		if(this->head == NULL) return;
		Node* temp = this->head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp = temp->prev;
		delete (temp->next);
		temp->next = NULL;
	}
	void Print(){
		Node* temp = this->head;
		while(temp!=NULL){
			
			std::cout << temp->data << "  ";
			temp = temp->next;	
		}
		printf("\n");
	}
};

int main()
{
	int choice, choice2 ,data, pos;
	LinkedList LL;
	printf("doubly LinkedList\n");
	printf("what do you want to do\n");
	printf("1. insert\t2. delete\t3.endProgram\n");
	scanf("%d" , &choice);
	while(true){
		switch(choice){
			case 1 :
					printf("1.insertAtStart\t2.insertAtEnd\t3.insertAtNth\t4.Go back to Main menu\n");
					scanf("%d", &choice2);
					switch(choice2){
						case 1:
							printf("Enter Data:\t");
							scanf("%d" , &data);
							LL.insertAtStart(data);
							printf("\nUpdated List is\t");
							LL.Print();
							break;
						case 2:
							printf("Enter Data:\t");
							scanf("%d" , &data);
							LL.insertAtEnd(data);
							printf("\nUpdated List is\t");
							LL.Print();
							break;
						case 3:
							printf("Enter Data:\t");
							scanf("%d" , &data);
							printf("Enter the Position\n");
							scanf("%d", &pos);
							LL.insert(data, pos);
							printf("\nUpdated List is\t");
							LL.Print();
							break;
						case 4:
							printf("what do you want to do\n");
							printf("1. insert\t2. delete\t3.endProgram\n");
							scanf("%d", &choice);
							break;
					}
				break;
			case 2 :
					printf("1.DeleteAtStart\t2.DeleteAtEnd\t3.deleteAtNth\t4.Go back to main menu\n");
					scanf("%d", &choice2);
					switch(choice2){
						case 1:
							
							LL.deleteAtStart();
							printf("\nUpdated List is\t");
							LL.Print();
							break;
						case 2:
							LL.deleteAtEnd();
							printf("\nUpdated List is\t");
							LL.Print();
							break;
						case 3:
							printf("Enter the Position\n");
							scanf("%d", &pos);
							LL.deleted(pos);
							printf("\nUpdated List is\t");
							LL.Print();
							break;
						case 4:
							printf("what do you want to do\n");
							printf("1. insert\t2. delete\t3.endProgram\n");
							scanf("%d", &choice);
							break;
					}
				break;
			case 3 :
				printf("Thanks for using the Program\n");
				return 0;
				break;
			
		}
	}	
}



