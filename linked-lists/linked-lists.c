#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct 
Node
{
	int data;
	struct Node *next;
} node;

node*
createNode(int data, node *next)
{
	node *new_node; 

	new_node = malloc(sizeof(node));
	new_node->data = data;
	new_node->next = next;

	return new_node;
}

void
concat(node *head, int data)
{
	node *current = head;

	while(current != NULL)
	{
		if(current->next == NULL)	
		{
			node *new_node = createNode(data, NULL);

			current->next = new_node;

			break;

		}

		current = current->next;
	}
}

void
insert(node **head, int data) {
	node *new_node;

	new_node = malloc(sizeof(node));
	new_node->data = data;
	new_node->next = *head;	

	*head = new_node;
}

void
printList(node *head) 
{
	node *current = head;

	while(current != NULL)
	{
		printf("data->%d \n", current->data);
		printf("next->%p \n", current->next);

		current = current->next;
	}
}

int
main()
{
	node *head = NULL;
	head = malloc(sizeof(node));

	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 3);
	insert(&head, 4);
	insert(&head, 5);

	concat(head, 999);
	concat(head, 998);
	concat(head, 997);
	concat(head, 996);
	concat(head, 995);

	printList(head);
    
    return 0;
}
