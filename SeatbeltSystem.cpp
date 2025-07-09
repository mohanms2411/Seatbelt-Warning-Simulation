#include "SeatbeltSystem.hpp"
#include <iostream>

using namespace std;

SeatbeltSystem::SeatbeltSystem(int numSeats) {
    for (int i = 1; i <= numSeats; ++i) {
        seats.push_back(Seat(i));
    }
}

void SeatbeltSystem::updateSeatStatus(int seatID, bool occupied, bool seatbeltOn) {
    if (seatID > 0 && seatID <= seats.size()) {
        seats[seatID - 1].setOccupied(occupied);
        seats[seatID - 1].setSeatbelt(seatbeltOn);
    }
}

void SeatbeltSystem::checkWarnings() const {
    for (const auto& seat : seats) {
        if (seat.isOccupied() && !seat.isSeatbeltOn()) {
            cout << "Warning: Seat " << seat.getSeatID() << " is occupied but seatbelt is OFF!" << endl;
        }
    }
}
