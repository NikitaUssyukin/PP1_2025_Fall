/*
Struct
*/

#include <iostream>

using namespace std;

struct Song {
    string name;
    double rating;
    string artist;
    int duration;
};

int main() {

    Song crazyFrog;

    crazyFrog.name = "Crazy Frog";
    crazyFrog.rating = 10;
    crazyFrog.artist = "Axel F";
    crazyFrog.duration = 174; // seconds

    cout << "name: " << crazyFrog.name << endl;
    cout << "rating: " << crazyFrog.rating << endl;
    cout << "artist: " << crazyFrog.artist << endl;
    cout << "duration: " << crazyFrog.duration << endl;

    return 0;
}