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

    bool operator<(Song another) {
        if(this->rating != another.rating) return this->rating < another.rating;
        else return this->duration < another.duration;
    }

    bool operator>(Song another) {
        if(this->rating != another.rating) return this->rating > another.rating;
        else return this->duration > another.duration;
    }

    void print() {
        cout << "name: " << this->name << endl;
        cout << "rating: " << this->rating << endl;
        cout << "artist: " << this->artist << endl;
        cout << "duration: " << this->duration << endl;
    }
};

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