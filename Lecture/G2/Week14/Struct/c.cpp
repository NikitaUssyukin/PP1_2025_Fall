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
        // cout << this << endl;
        (*this).name = name; // (*this).name is the same as this->name
        this->rating = rating;
        this->artist = artist;
        this->duration = duration;
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
    // cout << &crazyFrog << endl;

    crazyFrog.print();

    return 0;
}