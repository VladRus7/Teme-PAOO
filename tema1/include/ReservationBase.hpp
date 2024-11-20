#pragma once
#include <string>
#include <iostream>

class ReservationBase {
protected:
    std::string name;  // Numele terenului
    std::string type;  // Tipul terenului
    double pricePerHour;  // Prețul pe oră al terenului

public:
    // Constructorul clasei de bază
    ReservationBase(const std::string& name, const std::string& type, double pricePerHour)
        : name(name), type(type), pricePerHour(pricePerHour) {
        std::cout << "Obiectul ReservationBase a fost creat." << std::endl;
    }

    // Destructorul clasei de bază
    virtual ~ReservationBase() {
        std::cout << "Destructorul ReservationBase a fost apelat." << std::endl;
    }

    // Gettere
    std::string getName() const { return name; }
    std::string getType() const { return type; }
    double getPricePerHour() const { return pricePerHour; }
};