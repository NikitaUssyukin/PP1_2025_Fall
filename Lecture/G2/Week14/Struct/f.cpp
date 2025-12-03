/*
Struct
*/

#include <iostream>
#include "Song.h"

using namespace std;

int main() {

    Song crazyFrog("Crazy Frog", 10, "Axel F", 174);
    Song countingStars("Counting Stars", 6, "One Republic", 257);
    Song lastChristmas("Last Christmas", 9, "Wham", 279);
    Song lastChristmas2("Last Christmas", 9, "Wham", 279);

    cout << (crazyFrog < countingStars) << endl;
    cout << (lastChristmas > countingStars) << endl;
    cout << (lastChristmas == lastChristmas2) << endl;

    return 0;
}