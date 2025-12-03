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