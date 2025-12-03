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

    Song(string name, double rating, string artist, int duration) {
        this->name = name;
        this->rating = rating;
        this->artist = artist;
        this->duration = duration;
    }

    bool operator==(Song another) {
        return (
            (this->name == another.name) &&
            (this->rating == another.rating) &&
            (this->artist == another.artist) &&
            (this->duration == another.duration)
        );
    }
};

int main() {

    Song crazyFrog("Crazy Frog", 10, "Axel F", 174);
    Song countingStars("Counting Stars", 6, "One Republic", 257);
    Song lastChristmas("Last Christmas", 9, "Wham", 279);
    Song lastChristmas2("Last Christmas", 9, "Wham", 279);

    cout << (crazyFrog == countingStars) << endl;
    cout << (countingStars == lastChristmas) << endl;
    cout << (lastChristmas == lastChristmas2) << endl;

    return 0;
}