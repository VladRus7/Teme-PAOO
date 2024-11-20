#include "Reservation.hpp"
#include <iostream>


//constructorul pentru rezervare
Reservation::Reservation(const Field& field, int hours) : ReservationBase(field.getName(), field.getType(), field.getPricePerHour()), field(new Field(field)), hours(hours)  {
	
    std::cout << "Obiectul Reservation derivat a fost creat." << std::endl;
	
}

Reservation::~Reservation() {
	delete field; // eliberam memoria alocata pentru obiectul Field
	std::cout << "Memorie eliberata cu succes" << std::endl;
}



double Reservation::calculateTotalCost() const {
	return field->getPricePerHour() * hours; // calculam costul total
}

