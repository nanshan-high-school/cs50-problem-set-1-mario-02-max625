#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i > 0 ; i --) {
        for (int j = 0; j < 10; j ++) {
             if (j < i-1){
                 cout << " ";
             }else {
                 cout << "-";
             }
        }
        cout << "\n";
    }
}
