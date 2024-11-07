#pragma once
#include <string>

class Field {
private:
	//Private Members
	std::string name; //numele terenului
	std::string type; //tipul de teren
	double pricePerHour; //pretul pe ora necesar rezervarii
	

public:
	//Initialization Constructor
	Field(const std::string& name, const std::string& type, double pricePerHour);
	std::string getName() const; //returneaza numele terenului
	std::string getType() const; //returneaza tipul terenului
	double getPricePerHour() const; // returneaza pretul pe ora pentru inchirierea unui teren
	
	
};
