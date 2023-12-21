#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "create_stack.h"
#include "push_stack.h"
#include "pop_stack.h"



bool balanced(Stack* myStack,char text[]);

int main()
{

    char text[1000];
    Stack *myStack = createStack();

    printf("Parantezleri giriniz : ");
    scanf("%s",text);

    if(balanced(myStack,text) == 1)
    {
        printf("Eslesme basarili \n");
    }
    else
    {
        printf("Eslesme basarisiz \n");
    }

    return 0;
}


bool balanced(Stack* myStack,char text[])
{
    for(int i=0; i < strlen(text); i++)
    {
        if((text[i] == ')'))
        {
            if (myStack->counter == 0)
            {
                return false;
            }
            else
            {
                if(myStack->top->data == '(')
                    popStack(myStack);
                else
                    return false;
            }
        }

        else if((text[i] == '}'))
        {
            if (myStack->counter == 0)
            {
                return false;
            }
            else
            {
                if(myStack->top->data == '{')
                    popStack(myStack);
                else
                    return false;
            }

        }

        else if((text[i]=='(') || (text[i]=='{'))
        {
            pushStack(myStack,text[i]);
        }
        else
        {

        }
    }

    if((myStack->counter) == 0)
    {
        return true;
    }


}



