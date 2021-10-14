#include <stdio.h>
#include <stdlib.h>

struct
{
    int data;

} typedef Node;

int main()
{
    Node node_on_stack;

    node_on_stack.data = 40;

    printf("%d\n", node_on_stack.data);

    Node *nodes = (Node *)malloc(2 * sizeof(Node));

    Node user_node;

    printf("Give a value to a new node\n");
    scanf("%d", &user_node.data);

    nodes[0] = user_node;
    nodes[1] = node_on_stack;

    for (int i = 0; i < 2; i++)
    {
        printf("node number:%d has data:%d\n",i ,nodes[i].data);
    }

    return 0;
}