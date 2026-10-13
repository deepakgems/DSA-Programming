#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;

	Node* createNode(int data)
	 {
   		 Node* newNode = (Node*)malloc(sizeof(Node));
    		if (!newNode) {
       		printf("Memory error\n");
       		return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
	void insertAtPosition(Node** head, int data, int position) {
   		 Node* newNode = createNode(data);
    		if (position == 1) {
        	newNode->next = *head;
       		*head = newNode;
       		return;
    }
    Node* current = *head;
    int currentPosition = 1;
    while (current && currentPosition < position - 1) {
        current = current->next;
        currentPosition++;
    }
    if (!current) {
        printf("Invalid position\n");
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}
	void printList(Node* head) {
    	while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
	int getLength(Node* head) {
   	 	int length = 0;
    	while (head) {
        length++;
        head = head->next;
    }
    return length;
}
	int main() {
    Node* head = NULL;
    int choice, data, position, length;

    while (1) {
        printf("1. Insert at position\n");
        printf("2. Print list\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                length = getLength(head);
                printf("Enter position (1-%d): ", length + 1);
                scanf("%d", &position);
                if (position < 1 || position > length + 1) {
                    printf("Invalid position\n");
                } else {
                    insertAtPosition(&head, data, position);
                }
                break;
            case 2:
                printf("Linked List: ");
                printList(head);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
