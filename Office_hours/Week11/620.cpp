#include <iostream>

using namespace std;

string triplets[10] = {
    "ZER",
    "ONE",
    "TWO",
    "THR",
    "FOU",
    "FIV",
    "SIX",
    "SEV",
    "EIG",
    "NIN"
};

int main() {

    string s;
    cin >> s;

    int first_num = 0;
    int second_num = 0;

    bool fill_first_num = true;

    for(int i = 0; i < s.size(); i += 3) {
        if(s[i] == '+') {
            ++i;
            fill_first_num = false;
        }
        string str_digit = "";
        
        // Option 1: for loop
        // for(int j = i; j < i + 3; ++j) {
        //     str_digit += s[j];
        // }

        // Option 2: substr() method
        str_digit = s.substr(i, 3);   // starting from index i, take 3 symbols including s[i]

        // cout << str_digit << endl; // checking correctness of str_digit

        int dec_digit;

        if(str_digit == "ZER") dec_digit = 0;
        else if(str_digit == "ONE") dec_digit = 1;
        else if(str_digit == "TWO") dec_digit = 2;
        else if(str_digit == "THR") dec_digit = 3;
        else if(str_digit == "FOU") dec_digit = 4;
        else if(str_digit == "FIV") dec_digit = 5;
        else if(str_digit == "SIX") dec_digit = 6;
        else if(str_digit == "SEV") dec_digit = 7;
        else if(str_digit == "EIG") dec_digit = 8;
        else if(str_digit == "NIN") dec_digit = 9;

        // cout << dec_digit << endl; // checking correctness of dec_digit

        if(fill_first_num) {
            first_num = first_num * 10 + dec_digit;
            /*
            0
            0 * 10 + 1  -> 1   (0 + 1)
            1 * 10 + 2  -> 12  (10 + 2)
            12 * 10 + 3 -> 123 (120 + 3)
            */
        } 
        else {
            second_num = second_num * 10 + dec_digit;
        }

        // checking correctness of our int numbers
        // cout << first_num << " " << second_num << endl;
    }

    int result = first_num + second_num;
    
    string str_res = "";

    // Option 1: while loop
    // while(result > 0) {
    //     int digit = result % 10;
    //     result /= 10;
    //     str_res = char(digit + '0') + str_res;
    // }

    // Option 2: to_string() function
    str_res = to_string(result);

    // cout << str_res << endl;  // checking correctness of conversion from int to string

    for(int i = 0; i < str_res.size(); ++i) {
        int digit = str_res[i] - '0';
        cout << triplets[digit];
    }
    cout << endl;

    return 0;
}