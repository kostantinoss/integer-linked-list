#include <stdlib.h>
#include <stdio.h>
#include "list.h"


typedef struct Node{
    int data;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
    Node* tail;
    int length;
} List;

List *createList() {
    List* list = (List *)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    return list;
}

void append(List *list, int num) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = num;
    new_node->next = NULL;
    if (list->length == 0) {
        list->head = new_node;
        list->tail = new_node;
        list->length++;
        return;
    }
    Node *last_node = list->tail;
    if (last_node->next == NULL) {
        last_node->next = new_node;
        list->tail = new_node;
    }
    list->length++;
}

void printList(List *list) {
    Node *item;
    Node *current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }    
    printf("\n");
}

int get(List *list, int index) {
    Node *current = list->head;
    int count = 0;
    while (current != NULL) {
        if (index == count) {
            return current->data;
        }
        current = current->next;
        ++count;
    }
    
    return 0;
}
