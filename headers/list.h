#ifndef LIST_H
#define LIST_H

#include "common.h"

typedef struct node {
	node* prev;
	node* next;

	int key;
	int value;
} node;

typedef struct list {
	node* head;
	node* tail;
	ull size;
} list;

int list_push_back(list* l, int key, int value); //добавляет в конец списка
int list_push_front(list* l, int key, int value); //добавляет в начало списка
int list_pop(list* l, node* n) //удаляет из случайного места в списке
int list_pop_back(list* l) //удаляет с конца списка
int list_pop_front(list* l) //удаляет из начала списка

#endif //LIST_H
