#include <iostream>
#include "Pet.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
    Pet bob; // From default constructor

    bob.pet_info();

    Pet flubs("Flubs", 1000000, "flubbergod", 9000);

    flubs.pet_info();

    return 0;
}
