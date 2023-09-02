#include<iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter input : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        //for printing spaces before star in each row
        for(int j = 0; j < n-i-1 ; j++) {
            cout << " ";
        }
        //for printing stars in each row
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}