#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter input: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}