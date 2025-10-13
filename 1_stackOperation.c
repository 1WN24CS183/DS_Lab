#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX-1){
        printf("stack overflow, cannot push %d", value);
    }
    else{
        top = top+1;
        stack[top]= value;
        printf("%d pushed into stack", value);
    }
}

void pop(int value){
    if(top == -1){
        printf("Stack is empty, no element to pop");
    }
    else{
        printf("%d popped from stack", value);
        top = top-1;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack elements are:\n");
        for(int i = top; i>= 0; i--){
            printf("%d", stack[i]);
        }
    }
}

void peek(){
    if(top == -1){
        printf("stack is empty, no top element");
    }
    else{
        printf("top element is:", stack[top]);
    }
}


int main(){
    int choice, value;
    printf("\n -- stack operation menu--\n");
    printf("1.push \n 2.pop \n 3.display \n 4. peek \n 5. exit\n");

    while(1){
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("enter the element to push:");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            printf("Enter the element to pop:");
            scanf("%d",&value);
            pop(value);
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        case 5:
            printf("Exiting the program");
            exit(0);

        default:
            printf("Invalid choice!, try again");
        }

    }
    return 0;
}


















