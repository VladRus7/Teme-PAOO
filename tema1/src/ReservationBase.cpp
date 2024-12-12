#include "ReservationBase.hpp"

std::mutex ReservationBase::mtx;

ReservationBase::ReservationBase(const std::string& name, const std::string& type, double pricePerHour)
    : name(name), type(type), pricePerHour(pricePerHour) {
    std::cout << "Obiectul ReservationBase a fost creat pentru " << name << std::endl;
}

ReservationBase::~ReservationBase() {
    std::cout << "Destructorul ReservationBase a fost apelat." << std::endl;
}

std::string ReservationBase::getName() const {
    return name;
}

std::string ReservationBase::getType() const {
    return type;
}

double ReservationBase::getPricePerHour() const {
    return pricePerHour;
}