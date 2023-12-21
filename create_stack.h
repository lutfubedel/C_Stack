typedef struct node
{
    void* data;
    struct node* link;
}NODE;

typedef struct
{
    int counter;
    NODE* top;
}Stack;


Stack* createStack()
{
    Stack* stack = (Stack*)malloc(sizeof(Stack*));
    if(stack)
    {
        stack->counter=0;
        stack->top= NULL;
    }

    return stack;
}
