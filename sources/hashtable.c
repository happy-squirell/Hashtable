#ifndef HASHTABLE_C
#define HASHTABLE_C

#include "hashtable.h"

int create_ht(ht* h){
    if(!h) return -1;

    h->k = rand() % (int) 1e7;
    h->b = rand() % (int) 1e7;

    h->size = 0;
    int status = vector_create(&(h->data));
    return status;
}

void free_ht(ht* h){
    if(!h) return;

    vector_free(&(h->data));
}

int set_pair(ht* h, int key, int value){
    if(!h) return -1;
    int status = 0;
    // hash = k * x + b
    int hash = (h->k * key + h->b) % h->data.size;
    
    int isFound = 0;
    node* now = h->data.data[hash].head;
    while(!now){
        if(now->key = key) {
            isFound = 1;
            break;
        }

        now = (node*)now->next;
    }

    if(isFound) {
        now->value = value;
        return 0;
    }
    else {
        status = list_push_back(&(h->data.data[hash]), key, value);
        return status;
    }
}


int delete_ht(ht* h, int key) {
    if(!h) return 1;

    int hash = (h->k * key + h->b) % h->data.size;
    
    int isFound = 0;
    node* now = h->data.data[hash].head;
    while(!now){
        if(now->key = key) {
            isFound = 1;
            break;
        }
        now = (node*)now->next;
    }

    if(isFound) {
        int status = list_pop(&(h->data.data[hash]), now);
        return status;
    }
}

int find_pair(ht* h, int key, int* return_value){
    if(!h) return 1;

    int hash = (h->k * key + h->b) % h->data.size;

    node* now = h->data.data[hash].head;
    while(!now && now->key != key) {
        now = (node*)now->next;
    }

    if(!now){
        *return_value = now->value;
        return 0;
    }
    return -1;
}

#endif //HASHTABLE_C
