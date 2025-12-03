/*
Pointers
*/

#include <iostream>

using namespace std;

int* hp_ptr;

void reduce_hp(int amount) {
   *hp_ptr -= amount;
}

void heal() {
   *hp_ptr = 100;
}

int main() {

    int player_a_hp = 100;
    int player_b_hp = 100;

    hp_ptr = &player_a_hp;
    reduce_hp(20);
    cout << player_a_hp << endl;
    
    hp_ptr = &player_b_hp;
    reduce_hp(50);
    cout << player_b_hp << endl;
    
    heal();
    cout << player_b_hp << endl;

    return 0;
}