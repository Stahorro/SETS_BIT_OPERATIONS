//Stanislaw Kucharski
#include "bitwise_operations.h"


bool LessThen(int Set1, int Set2)
{
	int cardinality1, cardinality2;
	cardinality1 = Cardinality(Set1);
	cardinality2 = Cardinality(Set2);
	if(cardinality1 < cardinality2) return true;
	else if (cardinality1 > cardinality2) return false;
	else {
		if (Set1 < Set2) return true;
		else return false;
	}
}

bool LessEqual(int Set1, int Set2)
{
	if(Set1 == Set2) return true;
	else return LessThen(Set1, Set2);
}

bool GreatThen(int Set1, int Set2){
	int cardinality1, cardinality2;
	cardinality1 = Cardinality(Set1);
	cardinality2 = Cardinality(Set2);
	if (cardinality1 > cardinality2) return true;
	else if (cardinality1 < cardinality2) return false;
	else {
		if (Set1 > Set2) return true;
		else return false;
	}
}

bool GreatEqual(int Set1, int Set2){
	if(Set1 == Set2) return true;
	else return GreatThen(Set1, Set2);	
}


