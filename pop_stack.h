int popStack(Stack* stack)
{
    void* dataOutPtr;
    NODE* tempNode;

    if((stack->counter == 0))
    {
        printf("X");
        return 0;
    }
    else
    {
        tempNode = stack->top;
        dataOutPtr = stack->top->data;
        stack->top = stack->top->link;

        free(tempNode);
        (stack->counter)--;
        return 1;
    }


}
