#include <stdio.h>
#define size 500001

typedef struct
{
    int que[size];
    int front;
    int rear;
} queue;


int Initialize(queue *q)
{
    q->front = q->rear = 0;
}

int is_empty(queue *q)
{
    return (q->front == q->rear);
}

int is_full(queue *q)
{
    return ((q->rear + 1) % size == q->front);
}

void enqueue(queue *q, int x)
{
    if(is_full(q))
        return;
    q->rear = (q->rear + 1) % size;
    q->que[q->rear] = x;
}

int dequeue(queue *q)
{
    if(is_empty(q))
        return -1;
    q->front = (q->front + 1) % size;
    // q->front는 초기에 0이기 때문에 1을 더하여 1부터 n까지 데이터를 저장할 수 있도록 한다.
    return q->que[q->front];
}

int main()
{
    queue queue;
    Initialize(&queue);

    int n,i;
    int x = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        enqueue(&queue, i + 1);
    
    while(!is_empty(&queue))
    {
        x = dequeue(&queue);
        if(is_empty(&queue))
            break;
        x = dequeue(&queue);
        enqueue(&queue, x);
    }

    printf("%d\n", x);

    return 0;
}
