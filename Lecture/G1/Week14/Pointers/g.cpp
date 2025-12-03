/*
Pointers
Working with arrays
*/

#include <iostream>

using namespace std;

int main() {

   int n;
   cin >> n;

   int a[n];

   for(int i = 0; i < n; ++i) {
      cin >> *(a + i);
      // same as:
      // cin >> a[i];
   }

   for(int i = 0; i < n; ++i) {
      cout << *(a + i) << endl;
      // same as:
      // cout << a[i] << endl;
   }
   
   return 0;
}