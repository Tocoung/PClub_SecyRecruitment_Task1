#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        if (n >= 1'000'000) {
            cout << 3 << endl;
        } else if (n >= 10'000) {
            cout << 2 << endl;
        } else if (n >= 100) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
