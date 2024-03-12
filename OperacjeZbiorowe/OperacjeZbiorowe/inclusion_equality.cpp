//Stanislaw Kucharski
#include "bitwise_operations.h"


bool Inclusion(int Set1, int Set2){
	return (Set1 & Set2) == Set1;
}

bool Equality(int Set1, int Set2){
	return Set1 == Set2;
}