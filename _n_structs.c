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

    Node *nodes_on_theHEAP = (Node *)malloc(2 * sizeof(Node));

    Node user_node;

    printf("Give a value to a new node\n");
    scanf("%d", &user_node.data);

    nodes_on_theHEAP[0] = user_node;
    nodes_on_theHEAP[1] = node_on_stack;

    for (int i = 0; i < 2; i++)
    {
        printf("node number:%d has data:%d\n",i ,nodes_on_theHEAP[i].data);
    }

    return 0;
}