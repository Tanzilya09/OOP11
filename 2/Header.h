#pragma once
#include <vector>
using namespace std;

class Elevator {
private:
    int currentFloor;
    vector<int> destinations;

public:
    Elevator();
    void requestFloor();
    void moveToFloor(int floor);
    void setDestination();
    void serviceDestinations();
};