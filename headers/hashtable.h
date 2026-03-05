#ifndef HASHTABLE_H
#define HASHTABLE_H

typedef struct ht {
	vector_void* vector;
	list* list;
} ht;

int create_ht(vector_void* v, list* l);
int delete_ht(vector_void* v, list* l);
int find_pair(ht* h, int key);

#endif //HASHTABLE_H