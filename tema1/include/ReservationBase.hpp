#pragma once
#include <string>
#include <iostream>
#include <mutex>

class ReservationBase {
protected:
    std::string name;  // Numele terenului
    std::string type;  // Tipul terenului
    double pricePerHour;  // Pretul pe oră al terenului

    static std::mutex mtx; // Mutex pt gestionarea resurselor

public:
    ReservationBase(const std::string& name, const std::string& type, double pricePerHour);
    virtual ~ReservationBase();

    std::string getName() const;
    std::string getType() const;
    double getPricePerHour() const;
};