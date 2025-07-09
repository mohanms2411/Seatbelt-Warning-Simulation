#ifndef SEATBELTSYSTEM_HPP
#define SEATBELTSYSTEM_HPP

#include <vector>
#include "Seat.hpp"

class SeatbeltSystem {
private:
    std::vector<Seat> seats;

public:
    SeatbeltSystem(int numSeats);
    void updateSeatStatus(int seatID, bool occupied, bool seatbeltOn);
    void checkWarnings() const;
};

#endif
