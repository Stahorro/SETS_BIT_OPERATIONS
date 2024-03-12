//Stanislaw Kucharski
#include "bitwise_operations.h"

//niech zbior bedzie przedstawiony jako int w ktorym kazdy bit odpowiada jednemu elementowi zbioru

void EvaluateElement(char* input, int* ElementPtr, int* quantifierPtr);
void EmplaceMinor(char* input, int* SetPtr);

void Emplace(char* input, int* SetPtr) {
	*SetPtr = 0;
	EmplaceMinor(input, SetPtr);
}

void EmplaceMinor(char* input, int* SetPtr) {
	int quantifier = 1;
	int currentChar = *input;
	if (currentChar == (int)' ') {
		EmplaceMinor(input + 1, SetPtr);
	}
	else if (currentChar == (int)'0' || currentChar == (int)'1') {
		int element = 0;
		EvaluateElement(input, &element, &quantifier);
		int temp = 1 << element;
		temp -= temp & *SetPtr;
		*SetPtr += temp;
		EmplaceMinor(input + 5, SetPtr);
	}

}

void EvaluateElement(char* input, int* elementPtr, int* quantifierPtr) {
	int currentChar = *input;
	if (currentChar == (int)'0' || currentChar == (int)'1') {
		EvaluateElement(input + 1, elementPtr, quantifierPtr);
		currentChar -= 48;
		*elementPtr += currentChar * *quantifierPtr;
		*quantifierPtr *= 2;
	}
}



