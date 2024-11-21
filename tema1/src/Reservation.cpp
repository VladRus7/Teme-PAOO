#include "Reservation.hpp"
#include <iostream>


//constructorul pentru rezervare
Reservation::Reservation(const Field& field, int hours) : ReservationBase(field.getName(), field.getType(), field.getPricePerHour()), field(new Field(field)), hours(hours)  {
	
    std::cout << "Obiectul Reservation derivat a fost creat pentru " << field.getName() << std::endl;
	
}

Reservation::~Reservation() {
	delete field; // eliberam memoria alocata pentru obiectul Field
	std::cout << "Destructorul Reservation a fost apelat" << std::endl;
}

// Copy constructor
Reservation::Reservation(const Reservation& other)
    : ReservationBase(other), field(new Field(*other.field)), hours(other.hours) {
    std::cout << "Copy constructor a fost apelat." << std::endl;
}

// Move constructor
Reservation::Reservation(Reservation&& other) noexcept
    : ReservationBase(std::move(other)), field(other.field), hours(other.hours) {
    other.field = nullptr; // Transferăm proprietatea asupra resursei
    std::cout << "Move constructor a fost apelat." << std::endl;
}


double Reservation::calculateTotalCost() const {
	return field->getPricePerHour() * hours; // calculam costul total
}

