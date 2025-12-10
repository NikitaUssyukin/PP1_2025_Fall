/*
Struct
*/

#include <iostream>

using namespace std;

struct Food {
    int weight;
    string name;
    string cuisine;
    int calories;
    string age;
};

int main() {

    Food manty;

    manty.weight = 5;
    manty.name = "Manty";
    manty.cuisine = "Kazakh";
    manty.calories = 10000;
    manty.age = "1759 years";

    cout << manty.weight << endl;
    cout << manty.name << endl;
    cout << manty.cuisine << endl;
    cout << manty.calories << endl;
    cout << manty.age << endl;

    return 0;
}