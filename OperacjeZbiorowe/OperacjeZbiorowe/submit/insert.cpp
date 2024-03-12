//Stanislaw Kucharski
#include "bitwise_operations.h"


// korzystam z funkcji emplace aby utworzyc zbior SET2 nastepnie ze zbioru SET1 usuwam czesc wspolna z SET2 i dodaje je do siebie

void Insert(char* input, int* Set1Ptr) {
	int Set2;
	Emplace(input, &Set2);
	int Intersection = Set2 & *Set1Ptr;
	*Set1Ptr = *Set1Ptr + (Set2 - Intersection);
}