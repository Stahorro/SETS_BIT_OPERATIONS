//Stanislaw Kucharski
#include "bitwise_operations.h"

//program konwertuje liczbe na napis w kolejnosci malejacej liczb binarnych ktore reprezentuja ciagi

void PrintMinor(int Set1, char* result,int scale1, int scale2);
void RevertToChar(int scale2, char* result, int iteration);
int abs(int a) {
	if (a < 0)return -a;
	else return a;
}

void Print(int Set1, char* result) {
	int scale1 = -2147483648; // scale1 = 0b 10000000000000000000000000000000
	int scale2 = 31; // scale2 = 0b 11111
	if (Set1 == 0) {
		*result = 'e';
		*(result + 1) = 'm';
		*(result + 2) = 'p';
		*(result + 3) = 't';
		*(result + 4) = 'y';
		*(result + 5) = '\0';
	}
	else {
		PrintMinor(Set1, result, scale1, scale2);
	}
}

void PrintMinor(int Set1, char* result, int scale1,int scale2) {
	if (scale1 == 1) {
		if ((Set1 & scale1) == scale1) {
			*result = '0';
			*(result + 1) = '0';
			*(result + 2) = '0';
			*(result + 3) = '0';
			*(result + 4) = '0';
			*(result + 5) = '\0';
		}
		else {
			*(result - 1) = '\0';
		}
	}
	else {
		if ((Set1 & scale1) == scale1) {
			RevertToChar(scale2, result, 16);
			*(result + 5) = ' ';
			PrintMinor(Set1, result + 6, abs((scale1 >> 1) - scale1), scale2-1);
		}
		else {
			PrintMinor(Set1, result, abs((scale1 >> 1) - scale1), scale2-1);
		}
		
	}
}

void RevertToChar(int scale2, char* result, int iteration) {
	if (iteration > 0) {
		*result = ((scale2 & iteration) != 0) + (int)'0';
		if((scale2 & iteration) !=0)RevertToChar(scale2 - iteration, result + 1, iteration >> 1);
				else RevertToChar(scale2, result + 1, iteration >> 1);
	}	
}
