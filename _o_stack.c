#include <stdio.h>
#include <stdlib.h>

#define MAX_DEPTH 1000

struct
{
    int current_size;
    int count;
    int elements[MAX_DEPTH];

}typedef custom_stack;

int initialize_stack(custom_stack *s)
{
    s->count = 0;

    return 0;
}

int push_to_stack(custom_stack *s, int element)
{
    if (s->count < MAX_DEPTH)
    {
        s->elements[s->count++] = element;
        return 0;
    }
    return -1; // stack is full;
}

int peek_in_stack(custom_stack *s)
{
    if (s->count > 0)
        return s->elements[s->count - 1];
    return -1; // the stack is empty
}

int pop_from_stack(custom_stack *s)
{
    if (s->count > 0)
    {
        int response = s->elements[s->count - 1];
        s->count--;
        return response;
    }
    return -1; // the stack is empty
}

int main()
{
    custom_stack s;
    initialize_stack(&s);
    push_to_stack(&s,5);
    push_to_stack(&s,2);
    push_to_stack(&s,3);

    for(int i=0;i<3;i++)
        printf("%d\n",pop_from_stack(&s));

    exit(0);
}