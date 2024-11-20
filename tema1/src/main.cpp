#include "Field.hpp"
#include "Reservation.hpp"
#include <iostream>
#include <vector>

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

   
reservation2.~Reservation();

// Cream o nouă rezervare pe baza obiectului existent
new (&reservation2) Reservation(field1, reservation1.calculateTotalCost() / field1.getPricePerHour());


    std::cout << "Cost total pentru rezervarea 2 după atribuire: " << reservation2.calculateTotalCost() << " lei\n";

    // Obiectele se distrug automat la ieșirea din scope
	
	return 0;
}
