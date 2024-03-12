//Stanislaw Kucharski
#include "bitwise_operations.h"


void Cardinality_Recur(int Set1, int* count,int scale1);
int abs(int a);

int Cardinality(int Set1){
	int scale1 = -2147483648; // scale1 = 0b 10000000000000000000000000000000
	int count = 0;
	Cardinality_Recur(Set1, &count, scale1);
	return count;
}

void Cardinality_Recur(int Set1, int* count, int scale1){	
	if (scale1 != 0) {
		if ((Set1 & scale1) != 0) {
			*count += 1;
		}
		if (scale1 == 1) scale1 = 0;
		Cardinality_Recur(Set1, count, abs((scale1 >> 1) - scale1));
	}
}