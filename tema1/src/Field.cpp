#include "Field.hpp"
//initialization constructor
Field::Field(const std::string& name, const std::string& type, double pricePerHour) : name(name), type(type), pricePerHour(pricePerHour){}

std::string Field::getName() const {
	return name;
}

std::string Field::getType() const {
	return type;
}

double Field::getPricePerHour() const {
	return pricePerHour;
}


