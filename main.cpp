#include <iostream>
#include "SeatbeltSystem.hpp"

using namespace std;

int main() {
    SeatbeltSystem system(4); // Simulate 4 seats

    cout << "Enter seat info (0 = No, 1 = Yes):\n";
    for (int i = 1; i <= 4; ++i) {
        bool occ, belt;
        cout << "Seat " << i << " occupied? ";
        cin >> occ;
        cout << "Seatbelt on? ";
        cin >> belt;
        system.updateSeatStatus(i, occ, belt);
    }

    cout << "\n--- Warning Check ---\n";
    system.checkWarnings();

    return 0;
}
