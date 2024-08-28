#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100

struct Stack{
    char words[MAX][MAX];
    int top;
};

//init stack

void initStack(struct Stack *ptr){
    ptr->top = -1; //so that the first element could get an index of 0 to it
};

int isStackFull(struct Stack *ptr){
    return ptr->top == MAX-1;
    //cuz 0-99 have 100 elements
};

int isStackEmpty(struct Stack *ptr){
    return ptr->top == -1;
};

void push(struct Stack *ptr, char *operation){
    if(isStackFull(ptr)){
        printf("Stack is full, can't push more operations\n");
        return;
    }
    strcpy(ptr->words[++ptr->top],operation);
}

void pop(struct Stack *ptr){
    if(isStackEmpty(ptr)){
        printf("Nothing to undo...Stack is empty already\n");
    }
    printf("Undo Item is = %s\n", ptr->words[ptr->top--]);
}

void displayTextFromStack( struct Stack *ptr){
    printf("Current Text is: ");
    for(int i=0; i <= ptr->top; i++){
        printf("%s", ptr->words[i]);
    }
    printf("\n");
};

//main function
int main(){
    struct Stack stack;
    initStack(&stack);

    int choice;
    char text[MAX];

    while (1)
    {
       printf("\n*****MENU*****\n");
       printf("1. Add Text\n");
       printf("2. Display text\n");
       printf("3. Undo\n");
       printf("4. Exit\n");

       printf("Enter your choice: ");
       scanf("%d", &choice);

       getchar();

       //switch cases for choice
       switch (choice)
       {
       case 1:
            printf("Enter text to add: ");
            fgets(text, MAX, stdin); // to read text with spaces
            text[strcspn(text, "\n")]=0; //to remove new line characters
            push(&stack, text);
        break;
       
       case 2:
            displayTextFromStack(&stack);
            break;
        
        case 3:
            pop(&stack);
            break;

        case 4:
            exit(0);

       default:
        printf("Invalid choice please try again later");
       }
    }
    
    return 0;
}