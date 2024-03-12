//Stanislaw Kucharski
#include "bitwise_operations.h"

// Disjoint sets are sets that have no elements in common.
bool Disjoint(int Set1, int Set2)
{
	return (Set1 & Set2) == 0;
}

// Conjunctive sets are sets that have elements in common.
bool Conjunctive(int Set1, int Set2)
{
	return (Set1 & Set2) != 0;
}