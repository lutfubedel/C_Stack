int pushStack(Stack* stack, void* dataInPtr)
{
    NODE* newNode;
    newNode = (NODE*)malloc(sizeof(NODE));

    if(!newNode)
    {
        return 0;
    }

    newNode->data = dataInPtr;
    newNode->link = stack->top;

    stack->top = newNode;
    stack->counter++;

    return 1;


}
