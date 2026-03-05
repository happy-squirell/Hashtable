#ifndef VECTOR_H
#define VECTOR_H

#define "common.h"
#include "list.h"

typedef struct vector_list {
	list* data;
	ull size;
} vector_list;

int create_vector(vector_list* v, ull size); 
void vector_free(vector_list* v);
int vector_resize(vector_list* v, int new_size);


#endif //VECTOR_H
