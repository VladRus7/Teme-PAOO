#pragma once
#include "ReservationBase.hpp"
#include "Field.hpp"

class Reservation : public ReservationBase {
private:
	Field* field; // pointer la obiectul de tip Field(terenul rezervat)
	int hours; // nr de ore pentru care se face rezervarea
	

public:
	Reservation(const Field& field, int hours); // constructor pentru rezervare
	~Reservation();//deconstructor pentru eliberarea memoriei	
	double calculateTotalCost() const; // calculeaza costul total al unei rezervari

	Reservation(const Reservation& other) = delete;
	Reservation(Reservation&&) = delete;
	Reservation& operator=(const Reservation& other) = delete;
	Reservation& operator=(Reservation&& other) = delete;

	
};