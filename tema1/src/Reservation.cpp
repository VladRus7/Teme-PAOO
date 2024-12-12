#include "Reservation.hpp"
#include <iostream>


Reservation::Reservation(std::shared_ptr<Field> field, int hours, std::unique_ptr<std::string> description)
    : ReservationBase(field->getName(), field->getType(), field->getPricePerHour()), field(field), hours(hours), description(std::move(description)){
    std::lock_guard<std::mutex> lock(mtx); // Protejam resursele partajate
    std::cout << "Mutex lock acquired in Reservation constructor.\n";
    std::cout << "Obiectul Reservation derivat a fost creat pentru " << field->getName() << " cu descrierea: " << *this->description << std::endl;
}

Reservation::~Reservation() {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Mutex lock acquired in Reservation destructor.\n";
    std::cout << "Destructorul Reservation a fost apelat." << std::endl;
}

Reservation::Reservation(const Reservation& other)
    : ReservationBase(other), field(other.field), hours(other.hours) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Mutex lock acquired in Reservation copy constructor.\n";
    std::cout << "Copy constructor a fost apelat." << std::endl;
}

Reservation::Reservation(Reservation&& other) noexcept
    : ReservationBase(std::move(other)), field(std::move(other.field)), hours(other.hours) {
    std::lock_guard<std::mutex> lock(mtx);
    other.field = nullptr; // Transferam proprietatea asupra resursei
    std::cout << "Mutex lock acquired in Reservation move constructor.\n";
    std::cout << "Move constructor a fost apelat." << std::endl;
}

double Reservation::calculateTotalCost() const {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Mutex lock acquired in calculateTotalCost().\n";
    return field->getPricePerHour() * hours; // Calculam costul total
}

