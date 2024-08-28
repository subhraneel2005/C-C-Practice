#include<stdio.h>
#include<stdlib.h>

#define MAX 5

struct Customer{
    char name[50];
    int serviceTime;
};

struct BankQueue{
    struct Customer queue[MAX];
    int front;
    int rear;
};

//init queue
void initQueue(struct BankQueue *q){
    q->front = -1;
    q->rear = -1;
};

//queue full
int isQueueFull(struct BankQueue *q){
    return q->rear == MAX-1;
};

//queue empty
int isQueueEmpty(struct BankQueue *q){
    return q->front == -1;
}

//enqueue customer
void enqueue(struct BankQueue *q, struct Customer c){
    if(isQueueFull(q)){
        printf("Queue is full\n");
        return;
    }
    if(isQueueEmpty(q)){
        q->front=0;
    }
    q->rear++;

    q->queue[q->rear] = c;
}

//dequeue customer
void dequeue(struct BankQueue *q){
    if(isQueueEmpty(q)){
       printf("Queue is empty! No customers in line.\n");
        return;
    }
    printf("\n\nCurrent customer is = %s\nServing Time is = %d\n", q->queue[q->front].name, q->queue[q->front].serviceTime);

    if(q->front == q->rear){
        q->front=-1;
        q->rear=-1;
        return;
    }

    q->front++;
}

//display customers or queue
void displayQueue(struct BankQueue *q){
    if (isQueueEmpty(q)) {
        printf("Queue is empty! No customers in line.\n");
        return;
    }

    printf("\nCUSTOMERS IN THE QUEUE ARE AS FOLLOWS:\n\n");
    for(int i=q->front; i<= q->rear; i++){
        printf("Customer name = %s (Service time = %d)\n", q->queue[i].name, q->queue[i].serviceTime);
    }

}

int main(){
    struct BankQueue q;

    initQueue(&q);

    struct Customer c1 = {"Subhraneel", 10};
    struct Customer c2 = {"Swastik", 15};
    struct Customer c3 = {"Subhamay", 18};

    enqueue(&q, c1);
    enqueue(&q, c2);
    enqueue(&q, c3);

    displayQueue(&q);

    dequeue(&q);

    displayQueue(&q);

    //adding a new customer to the rear of the queue means the end of the queue
    struct Customer c4 = {"Randd", 14};

    enqueue(&q, c4);

    displayQueue(&q);

    dequeue(&q);
    displayQueue(&q);

    dequeue(&q);
    displayQueue(&q);

    dequeue(&q);
    displayQueue(&q);

    return 0;
}