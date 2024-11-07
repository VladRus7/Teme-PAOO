#include "Reservation.hpp"
#include <iostream>


//constructorul pentru rezervare
Reservation::Reservation(const Field& field, int hours)  {
	this->field = new Field(field); // Alocam dinamic terenul
	this->hours = hours; 

	std::cout << "Memorie alocata cu succes" << std::endl;
	
}

Reservation::~Reservation() {
	delete field; // eliberam memoria alocata pentru obiectul Field
	std::cout << "Memorie eliberata cu succes" << std::endl;
}

Reservation::Reservation(const Reservation& other) {
    field = new Field(*other.field);  // Copiem obiectul Field din sursă
    hours = other.hours;  // Copiem valoarea pentru ore
}

Reservation& Reservation::operator=(const Reservation& other) {
    // Verificăm auto-assign (atunci când obiectul se atribuie lui însuși)
    if (this != &other) {
        // Eliberăm memoria alocată anterior
        delete field;

        // Alocăm memorie pentru a copia obiectul
        field = new Field(*other.field);  // Copierea obiectului Field
        hours = other.hours;  // Copierea valorii pentru ore
    }

    // Returnăm *this pentru a permite atribuiri în lanț
    return *this;
}

double Reservation::calculateTotalCost() const {
	return field->getPricePerHour() * hours; // calculam costul total
}

