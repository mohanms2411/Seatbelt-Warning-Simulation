#ifndef SEAT_HPP
#define SEAT_HPP

class Seat {
private:
    int seatID;
    bool occupied;
    bool seatbeltOn;

public:
    Seat(int id);
    void setOccupied(bool status);
    void setSeatbelt(bool status);
    bool isOccupied() const;
    bool isSeatbeltOn() const;
    int getSeatID() const;
};

#endif
