#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter num : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j+i <= n+1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}