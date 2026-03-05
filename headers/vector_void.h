#ifndef VECTOR_H
#define VECTOR_H

#define "common.h"

typedef struct vector_void {
	void** data;
	ull size;
	ull occupied; //сколько занято
} vector_void;

int create_vector(vector_void* v, ull size); 
void vector_free(vector_void* v);
int vector_push_back(vector_void* v,  void* value);
int vector_resize(vector_void* v, int new_size);


#endif //VECTOR_H
