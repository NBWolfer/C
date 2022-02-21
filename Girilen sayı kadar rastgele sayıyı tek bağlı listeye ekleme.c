#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct _type {
    int value;
    struct _type* next;
};

struct _type* create_number() {
    struct _type* p = malloc(sizeof(struct _type));
    int a;
    scanf_s("%d", &a);
    p->value = rand() % 100+a;
    p->next = NULL;
    return p;
}

int main() {
    struct _type* head, * current;

    srand(time(NULL));

    int count;
    printf("Enter number count to generate: ");
    scanf_s("%d", &count);

    head = create_number();
    current = head;
    printf("\nNumber generation:\n");

    for (int i = 1; i < count; i++) {
        current->next = create_number(current);
        current = current->next;
    }


    int i = 0;
    printf("\nNumber printing:\n");
    struct _type* tmp = head;
    while (tmp != NULL) {
        printf("%p -> %p : Value[%d]: %d eklendi\n", tmp, tmp->next, i, tmp->value);
        tmp = tmp->next;
        i++;
    }
    printf("\n");
}