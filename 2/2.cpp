#include "Header.h"
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    Elevator elevator;

    elevator.requestFloor();
    elevator.setDestination();

    return 0;
}