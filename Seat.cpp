#include "Seat.hpp"

Seat::Seat(int id) : seatID(id), occupied(false), seatbeltOn(false) {}

void Seat::setOccupied(bool status) {
    occupied = status;
}

void Seat::setSeatbelt(bool status) {
    seatbeltOn = status;
}

bool Seat::isOccupied() const {
    return occupied;
}

bool Seat::isSeatbeltOn() const {
    return seatbeltOn;
}

int Seat::getSeatID() const {
    return seatID;
}
