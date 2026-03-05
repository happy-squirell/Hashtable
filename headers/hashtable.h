#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "vector_list.h"
#include "list.h"

typedef struct ht {
	vector_list data; //вектор списков
	ull size; // кол-во элементов
	int k;
	int b;
} ht;

int create_ht(ht* h);
void free_ht(ht* h);
int set_pair(ht* h, int key, int value);
int delete_ht(ht* h, int key);
int find_pair(ht* h, int key, int* return_value);

#endif //HASHTABLE_H