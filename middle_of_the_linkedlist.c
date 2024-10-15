/* DONEEE !!*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int getLength(struct Node *head)
{
    int length = 0;
    struct Node *current = head;
    while (current != NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}

struct Node *middleNode(struct Node *head)
{
    int lenght = getLength(head);
    int middleIndex = lenght / 2;
    struct Node *current = head;
    for (int i = 0; i < middleIndex; i++)
    {
        current = current->next;
    }
    return current;
}

void printMiddleNode(struct Node *node)
{
    if (node != NULL)
    {
        printf(" Middle node is: %d\n", node->data);
    }
    else
    {
        printf("Liste bos\n");
    }
}

int main()
{

    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    struct Node *middle = middleNode(head);

    printMiddleNode(middle);

    return 0;
}