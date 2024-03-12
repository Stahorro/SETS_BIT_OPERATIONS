//Stanislaw Kucharski
#include "bitwise_operations.h"

//program usuwa elementy z SET1 ktore sa w napisie generujacym SET2

void Erase(char* input, int* Set1Ptr) {
	int Set2;
	Emplace(input, &Set2);
	int Intersection = Set2 & *Set1Ptr;
	*Set1Ptr = *Set1Ptr - Intersection;
}