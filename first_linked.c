#include <stdio.h>
#include <stdlib.h>
struct Node{
    int num;
    struct Node *next;
};

void main(){
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    first = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    first->num = 1;
    first->next = second;

    second->num = 5;
    second->next = third;

    third->num = 3;
    third->next = NULL;
}//6410406649 ธัญรดา สอนนาคงเจริญ
