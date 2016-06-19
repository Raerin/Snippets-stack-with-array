/*
Write a stack using an array.
This application pushes 10 integers on to the stack.
*/

#include <stdio.h>
#define MAX 10

int myStack[MAX];   // array to store the stack
int top = -1;           // variable is to keep track of 'top' of the stack

//Push function
void Push(int x){
    int i;

    if(top == MAX -1){                 //overflow case
        printf("Error: Stack Overflow\n");
        return;                             //exit function
    }//end if
    myStack[++top] = x;                     //stores data, increments array
	printf("Stack: ");                      //prints current stack
	for(i = 0;i<=top;i++)
		printf("%d ",myStack[i]);
	printf("\n");
}//push

//Pop function
void Pop(){
    int i;

    if(top == -1) {                         //if empty stack, show error
        printf("Error: No element to pop\n");
        return;                             //exit function
	}//end if
	top--;                                  //decrements array
	printf("Stack: ");                      //prints current stack
	for(i = 0; i<=top; i++)
		printf("%d ",myStack[i]);
    printf("\n");
}//pop


//Main function
int main() {
//this tests the Push and Pop functions and their error handling
    Pop();//trigger underflow error
    Push(0);
    Push(1);
	Push(2);
	Push(4);
	Push(8);
	Push(16);
	Push(32);
	Push(64);
	Push(128);
	Push(256);
	Push(512);//trigger overflow error
//end test

}//main



/* Output:

Error: No element to pop
Stack: 0
Stack: 0 1
Stack: 0 1 2
Stack: 0 1 2 4
Stack: 0 1 2 4 8
Stack: 0 1 2 4 8 16
Stack: 0 1 2 4 8 16 32
Stack: 0 1 2 4 8 16 32 64
Stack: 0 1 2 4 8 16 32 64 128
Stack: 0 1 2 4 8 16 32 64 128 256
Error: Stack Overflow

*/
