using namespace std;

struct Animal {
    int age;
    int height;
    string name;

    Animal(int age, int height, string name) {
        this->age = age;      // same as (*this).age = age;
        this->height = height;
        this->name = name;
    }

    void print() {
        cout << this->age << " " << this->height << " " << this->name;
        cout << "\n"; 
    }

    bool operator==(Animal another) {
        return (
            (this->age == another.age) &&
            (this->height == another.height) &&
            (this->name == another.name)
        );
    }

    bool operator<(Animal another) {
        if(this->age != another.age) return this->age < another.age;
        return this->height < another.height;
    }

    bool operator>(Animal another) {
        if(this->age != another.age) return this->age > another.age;
        return this->height > another.height;
    }
};