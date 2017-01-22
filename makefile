#Fill in the dependencies and rules to make the make file

testVectors: testVectors.o vectors.o
			gcc -o testVectors testVectors.o vectors.o
#depends on...
#rule to make testVectors from dependencies HINT: you need to add a flag for the math library (google it)
	
vectors.o: vectors.c
			gcc -c vectors.c -o vectors.o
#depends on...
#rule to make vectors.o from dependencies

testVectors.o: testVectors.c
			gcc -c testVectors.c -o testVectors.o
 #depends on... 
#rule to make testVectors.o from dependences

clean:
	rm *.o
	rm testVectors