
#include "vectors.h"
//#include "vectors.c"

int main(int argc, char *argv[]){
	vector v1,v2;

 if(argc != 7){
		printf("The correct format is testVectors x1 y1 z1 x2 y2 z2\n");
		return 1;
	}
	
	//initialize vectors
	v1=vector_init(atof(argv[1]),	atof(argv[2]),atof(argv[3]));
	v2=vector_init(atof(argv[4]),	atof(argv[5]),atof(argv[6]));
	
	//print v1 v2
	printf("The original vectors are:\n");
 //<--- code goes here
	vector_print(v1);
	vector_print(v2);
	
	//add v1 to v2 and print out the result
	printf("The sum of vectors is:\n");
 //<--- code goes here
	vector v3 = vector_add(v1,v2);
	vector_print(v3);

	


	

	//find dot product of v1 and v2 and print it out
 //<--- code goes here
	printf("The dot product of the vectors is: ");
	float dotProduct = vector_dot(v1,v2);
	printf("%.2f\n", dotProduct);
	
	//normalize v1 by v2 using the normalize method and print out v1 and v2 after normalization
	//if the length is 0 then print out an additional warning message saying that the vector was not normalized
	//printf("V1 before: \n");
	//vector_print(v1);
	int check1 = vector_normalize(&v1);
	int check2 = vector_normalize(&v2);
	if (check1 != 0 || check2 !=0) 
	{
		printf("The normalized vectors are: \n");
	}
	if(check1 == 0) 
	{
		printf("The first vector was not normalized \n");
	} else 
	{
		vector_print(v1);
	}
	if(check2 == 0)
	{
		printf("The second vector was not normalized \n");
	} else 
	{
		vector_print(v2);
	}
	// printf("The normalized vectors are \n");
	// vector_print(v1);
	// vector_print(v2);


	
 //<--- code goes here
			
 return 0;
}
