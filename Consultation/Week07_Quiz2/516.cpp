#include <iostream>

using namespace std;

int main() {

    int w, h;
    cin >> w >> h;

    int a[h][w]; // canvas

    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            a[i][j] = 0;
        }
    }

    int n;
    cin >> n;

    int painted = 0;

    for(int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int y = y1; y < y2; ++y) {
            for(int x = x1; x < x2; ++x) {
                if(a[y][x] == 0) {
                    a[y][x] = 1;
                    ++painted;
                }
            }
        }
    }

    cout << w * h - painted << endl;

    return 0;
}