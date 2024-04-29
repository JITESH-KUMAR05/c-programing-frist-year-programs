#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// stack is a liner data structure which follows last in first out

void push();
void pop();
void display();
int stack[MAX];
int top = -1;

void main()
{
    int op;
    printf("Start the flow to implement stack \n");
    while (1)
    {
        printf("\n Stack Menu :\n");
        printf(" 1.push \n 2. pop\n 3. display\n 4. Exit\n");

        scanf("%d", &op);
        switch (op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
        printf("Invalid choice \n");
        }
    }
}
void push(){
    int num;
    if (top == MAX -1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter the element to push : ");
        scanf("%d",&num);
        top++;
        stack[top] = num;

    }
}
void pop(){
    if(top == -1){
        printf("Stack underflow\n");

    }
    else{
        printf("Removed Element : %d\n", stack[top]);
        top--;

    }
}
void display(){
    if (top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack elements : \n");
        for (int i = top; i >= 0; i-- )
        {
            printf("%d\n", stack[i]);
        }
        
    }
}