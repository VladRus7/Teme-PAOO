#include "Field.hpp"
#include "Reservation.hpp"
#include <iostream>
#include <vector>
#include <utility>

int main(){
	
	/*TEMA1
	//vector pentru terenuri
	std::vector<Field>fields = {
		Field("Teren 1", "fotbal", 50.0),
		Field("Teren 2", "fotbal", 100.0),
		Field("Teren 3", "fotbal", 75.0),
		Field("Teren 4", "tenis", 20.0)

	};

	//vector pentru rezervari
	std::vector<Reservation> reservations = {
		Reservation(fields[0], 2),
		Reservation(fields[1], 0),
		Reservation(fields[2], 1),
		Reservation(fields[3], 3) 
	};
	
	
	
	
	for (int i = 0; i < fields.size(); i++) {
		
		
		
			std::cout << " Terenul: " << fields[i].getName() << " de " << fields[i].getType() << " este rezervat pentru pretul de: "  
			<< reservations[i].calculateTotalCost()<<" lei " << std::endl;
		
	}
	
	/*Verificare functionalitate
	Field field("Teren1", "fotbal", 50.0);

	Reservation reservation(field, 2);

	std::cout << "Terenul " << field.getName() << "este rezervat pentru " << reservation.calculateTotalCost() << "lei " << std::endl; */
	
	/*Verificare assignment operator
	Field field1("Teren 1", "fotbal", 50.0);
    Reservation res1(field1, 2);
    Reservation res2(field1, 3);
    
    res2 = res1;  // Testează operatorul de atribuire

    std::cout << "Rezervarea 2 cost: " << res2.calculateTotalCost() << " lei\n";*/

	 // Creăm obiecte Field
    Field field1("Teren 1", "fotbal", 50.0);


    Field field2("Teren 2", "fotbal", 100.0);

    // Creăm obiecte Reservation
    
    Reservation reservation1(field1, 2);
	
    
    Reservation reservation2(field2, 3);

    // Calculăm costurile rezervărilor
    std::cout << "Cost total pentru rezervarea 1: " << reservation1.calculateTotalCost() << " lei\n";
    std::cout << "Cost total pentru rezervarea 2: " << reservation2.calculateTotalCost() << " lei\n";

   
	std::cout << " TESTARE COPY SI MOVE CONSTRUCTORS" << std::endl;

	Field field3("Teren 3", "fotbal", 20.0);
    
    // Testare Copy Constructor
    Reservation reservation3(field3, 2);
	std::cout <<" Rezervarea 3 cu costul total: " << reservation3.calculateTotalCost() << "lei" << std::endl;
    Reservation reservation4 = reservation2; // Copy constructor
	std::cout << "Rezervarea 4 dupa copiere cu costul total " << reservation4.calculateTotalCost() << "lei" << std::endl;

    // Testare Move Constructor
    Reservation reservation5 = std::move(reservation3); // Move constructor
	std::cout << "Rezervarea 5 dupa move cu costul total " << reservation5.calculateTotalCost() << "lei" << std::endl;
	
	return 0;
}
