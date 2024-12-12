#include "Field.hpp"
#include "Reservation.hpp"
#include <iostream>
#include <vector>
#include <utility>
#include <memory>

int main(){
	
  // Cream smart pointers pentru Field
  	std::cout << "Smart pointer created for Field 1.\n";
    auto field1 = std::make_shared<Field>("Teren 1", "fotbal", 50.0);

	std::cout << "Smart pointer created for Field 2.\n";
    auto field2 = std::make_shared<Field>("Teren 2", "fotbal", 100.0);

	//Cream unique_ptr
	auto description1 = std::make_unique<std::string>("Rezervare pentru echipa de fotbal.");
    auto description2 = std::make_unique<std::string>("Rezervare pentru eveniment special.");
    // Cream obiecte Reservation
    Reservation reservation1(field1, 2, std::move(description1));
    Reservation reservation2(field2, 3, std::move(description2));

    // Calculam costurile rezervarilor
    std::cout << "Cost total pentru rezervarea 1: " << reservation1.calculateTotalCost() << " lei\n";
    std::cout << "Cost total pentru rezervarea 2: " << reservation2.calculateTotalCost() << " lei\n";

    // Testare Copy Constructor
	
    Reservation reservation3 = reservation1;
    std::cout << "Rezervarea 3: " << reservation3.calculateTotalCost() << " lei\n";

    // Testare Move Constructor
    Reservation reservation4 = std::move(reservation2);
    std::cout << "Rezervarea 4: " << reservation4.calculateTotalCost() << " lei\n";

	
	return 0;
}
