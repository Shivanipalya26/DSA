#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter input :";
    cin >> n;

    for(int i = 0; i < n; i++){
        //inner loop for columns
        // no of column = (n - row no) for each column
        // (N-j) will give us the numbers in a row starting from 1 to N-i
        for(int j = n; j > i; j--) {
            cout << n-j+1;
        }
        cout << endl;
    }

    return 0;
}