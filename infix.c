
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

struct Stack 
{ 
int top; 
int capacity; 
int* array; 
}; 


struct Stack* createStack(int capacity ) 
{ 
struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 

if (!stack)  
return NULL; 

stack->top = -1; 
stack->capacity = capacity; 

stack->array = (int*) malloc(stack->capacity * sizeof(int)); 

if (!stack->array) 
return NULL; 
return stack; 
} 
int isEmpty(struct Stack* stack) 
{ 
return stack->top == -1 ; 
} 
char peek(struct Stack* stack) 
{ 
return stack->array[stack->top]; 
} 
char pop(struct Stack* stack) 
{ 
if (!isEmpty(stack)) 
return stack->array[stack->top--] ; 
return '$'; 
} 
void push(struct Stack* stack, char op) 
{ 
stack->array[++stack->top] = op; 
} 


int isOperand(char ch) 
{ 
return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 


int Prec(char ch) 
{ 
switch (ch) 
{ 
case '+': 
case '-': 
return 1; 

case '*': 
case '/': 
return 2; 

case '^': 
return 3; 
} 
return -1; 
} 



int infixToPostfix(int ch,char* exp) 
{ 
int i, k,asd; 


struct Stack* stack = createStack(strlen(exp)); 
if(!stack)   
return -1 ; 

for (i = 0, k = -1; exp[i]; ++i) 
{ 
 
if (isOperand(exp[i])) 
    exp[++k] = exp[i]; 
  

else if (exp[i] == '(') 
    push(stack, exp[i]); 
  

else if (exp[i] == ')') 
{ 
    while (!isEmpty(stack) && peek(stack) != '(') 
        exp[++k] = pop(stack); 
    if (!isEmpty(stack) && peek(stack) != '(') 
        return -1;              
    else
        pop(stack); 
} 
else 
{ 
    while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack))) 
        exp[++k] = pop(stack); 
    push(stack, exp[i]); 
} 

} 


while (!isEmpty(stack)) 
exp[++k] = pop(stack ); 

exp[++k] = '\0'; 
if(ch==1)
printf( "%s", exp ); 
else
{    
for(asd=strlen(exp)-1;asd>=0;asd--)
if(exp[asd]==')'||exp[asd]=='(');
else
printf("%c",exp[asd]);
}
} 


int main() 
{ int choice;
while(1)
{   int i;
char exp[100],exp2[100];

printf("\nenter the infix expression\n");
scanf("%s",exp);
for(i=strlen(exp)-1;i>=0;i--)
    exp2[strlen(exp)-1-i]=exp[i];



printf("\n\n1)postfix\n2)prefix\n3)exit \n");

scanf("%d",&choice);
switch(choice)
{ case 1:infixToPostfix(1,exp);
break;
case 2:infixToPostfix(2,exp2);
break;
case 3:exit(1);
} 
}return 0; 
} 