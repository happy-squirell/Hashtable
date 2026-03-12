#ifndef LIST_C
#define LIST_C

#include "list.h"
#include "common.h"

int list_push_back(list* l, int key, int value){
    if(!l) return 1;
    node* new = malloc(sizeof(node));
    if(!new) return 1;

    new->value = value;
    new->key = key;

    if(list->size == 0) {
        new->prev = NULL;
        list->head = new;
        list->tail = new;
    }
    else {
        list->tail->next = new;
        new->prev = list->tail;
        list->tail = new;
    }
    list->size++;
    return 0;
}

int list_push_front(list* l, int key, int value){
    if(!l) return 1;
    node* new = malloc(sizeof(node));
    if(!new) return 1;

    new->value = value;
    new->key = key;

    if(list->size == 0){
        new->next = NULL;
        list->head = new;
        list->tail = new;
    }
    else {
        list->head->prev = new;
        new->next = list->head;
        list->head = new;
    }
    list->size++;
    return 0;
}

int list_pop_back(list* l){
    if(!l) return 1;

    if(list->size == 1){
        free(list->tail);
        list->head = NULL;
        list->tail = NULL;
        list->size = 0;
    }
    else if(list->size > 1){
        list->tail = list->tail->prev;
        free(list->tail->next);
        list->tail->next = NULL;
        list->size--;
    }
    return 0;
}

int list_pop_front(list* l){
    if(!l) return 1;

    if(list->size == 1){
        free(list->head);
        list->head = NULL;
        list->tail = NULL;
        list->size = 0;
    }
    else if(list->size > 0){
        list->head = list->head->next;
        free(list->head);
        list->head->prev = NULL;
        list->size--;
    }
    return 0;
}

int list_pop(list* l, node* n){ //задать вопросы Сергею или Ильнару, допилить на занятии
    if(!l) return 1;
    if(!n) return 1;

    if(list->size == 1){
        list->size = 0;
        free(list);
        list->head = NULL;
        list->tail = NULL;
    }
    else if(list->size > 1){
         
    }
}

#endif //LIST_C
