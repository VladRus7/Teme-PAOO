#include "Field.hpp"
#include "Reservation.hpp"
#include <iostream>
#include <vector>

int main(){
	
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
	
	reservations[3] = reservations[2];
	
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
    
Hatz

    res2 = res1;  // Testează operatorul de atribuire

    std::cout << "Rezervarea 2 cost: " << res2.calculateTotalCost() << " lei\n";*/
	
	return 0;
}
