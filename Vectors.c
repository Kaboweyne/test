#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x=x;
 v.y=y;
 v.z=z;
 v.length=sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
//<--- code goes here
vector vector_add(vector a, vector b) 
{
	vector v;
	v.x = a.x + b.x;
	v.y = a.y + b.y;
	v.z = a.z + b.z;
	v.length = a.length + b.length;
	//vector_print(v);
	return v;
}


//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is)
//<--- code goes here
float vector_dot(vector a, vector b)
{
	float dotProduct = 0.0;
	dotProduct = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);

	return dotProduct;
	
}

//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z components by its length. Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
//<--- code goes here
int vector_normalize(vector *a)
{
	int successful = 1;
	if (a->length > 0) 
	{
		a->x = a->x / a->length;
		a->y = a->y / a->length;
		a->z = a->z / a->length;
	}
	else{
		successful = 0;
	}

	return successful;


}


//write vector_print function that prints out the x,y,z and length of a vector on separate lines
//<--- code goes here
void vector_print(vector a)
{
	printf("%.3f %.3f %.3f %.3f \n" , a.x, a.y, a.z, a.length);
}

