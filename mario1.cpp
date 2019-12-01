#include <iostream>
using namespace std;

int main() {
    int n = 9;
    for (int i = 0; i < 10 ; i ++) {
        for (int j = 0; j < 10; j ++) {
            if (j < n) {
                cout << " ";
            } else {
                cout << "-";
            }
        }
        cout << "\n";
        n -= 1;
    }
}
