#pragma once
#include "Field.hpp"

class Reservation {
private:
	Field* field; // pointer la obiectul de tip Field(terenul rezervat)
	int hours; // nr de ore pentru care se face rezervarea
	

public:
	Reservation(const Field& field, int hours); // constructor pentru rezervare
	~Reservation();//deconstructor pentru eliberarea memoriei
	Reservation(const Reservation& other);  // constructor de copiere
    Reservation& operator=(const Reservation& other);
	double calculateTotalCost() const; // calculeaza costul total al unei rezervari
	
	
};
