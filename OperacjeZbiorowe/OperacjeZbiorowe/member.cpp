//Stanislaw Kucharski
#include "bitwise_operations.h"

//program sprawdza czy element zawarty w tablicy jest w SET1
bool Member(char* input, int Set1) {
	int element;
	Emplace(input, &element);
	if ((Set1 & element) != 0) return true;
	else return false;
}