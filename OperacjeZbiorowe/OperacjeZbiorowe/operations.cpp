//Stanislaw Kucharski
#include "bitwise_operations.h"

void Union(int Set1, int Set2, int* result){
	*result = Set1 | Set2;
}

void Intersection(int Set1, int Set2, int* result){
	*result = Set1 & Set2;
}

void Symmetric(int Set1, int Set2, int* result){
	*result = Set1 ^ Set2;
}

void Difference(int Set1, int Set2, int* result){
	*result = Set1 & ~Set2;
}

void Complement(int Set1, int* result){
	*result = ~Set1;
}