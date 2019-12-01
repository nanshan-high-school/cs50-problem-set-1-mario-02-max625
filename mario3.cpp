#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 6;
    for (int i = 4; i > 0 ; i --) {
        for (int j = 0; j < 10; j ++) {
            if (j < n || j > m || j == 4 || j == 5) {
                cout << " ";
            } else {
                cout << "-";
            }
        }
        cout << "\n";
        n--;
        m++;
    }
}
