//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
#ifndef VECTORS_H
#define VECTORS_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	float x;
	float y;
	float z;
	float length;
 //enter definition for float fields for x,y,z,length
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);

//header for vector_add function, vector_dot function, vector_normalize function and vector_print function
vector vector_add(vector a, vector b);

void vector_print(vector a);

int vector_normalize(vector *a);

float vector_dot(vector a, vector b);

#endif
