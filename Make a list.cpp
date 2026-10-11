#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time() to make random rolls actually random

using namespace std;

// 1. Function to roll a 20-sided die (returns a number from 1 to 20)
int rollD20() {
    return rand() % 20 + 1;
}

// 2. Function to roll a 4-sided die (returns a number from 1 to 4)
int rollD4() {
    return rand() % 4 + 1;
}

int main() {
    // Seed the random number generator so it changes every time you run it
    srand(time(0));

    int rollCount = 0;
    int d20Result = 0;
    int d4Result = 0;

    // Keep rolling in a loop until BOTH dice land on 1
    while (d20Result != 1 || d4Result != 1) {
        rollCount++; // Add 1 to our counter every time we roll

        d20Result = rollD20();
        d4Result = rollD4();
    }

    // Once the loop breaks, print out how many tries it took!
    cout << "It took " << rollCount << " rolls to hit 1 on both dice!\n";

    return 0;
}