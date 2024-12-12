#pragma once
#include "ReservationBase.hpp"
#include "Field.hpp"
#include <memory>


class Reservation : public ReservationBase {
private:
    std::shared_ptr<Field> field; // smart pointer pentru gestionarea memoriei
	std::unique_ptr<std::string> description; // Descriere unica pt rezervare
    int hours; // nr de ore pentru care se face rezervarea

public:
    Reservation(std::shared_ptr<Field> field, int hours, std::unique_ptr<std::string> description);
    ~Reservation();

    double calculateTotalCost() const;

    Reservation(const Reservation& other); // copy constructor
    Reservation(Reservation&&) noexcept;   // move constructor
    Reservation& operator=(const Reservation& other) = delete; // assignment interzis
    Reservation& operator=(Reservation&& other) = delete;
};