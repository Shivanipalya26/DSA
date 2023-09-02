#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter num : ";
    cin >> n;

    //it is the outer loop which will loop for rows
    for(int i = 0; i < n; i++) {
        //it is inner loop which will loop for columns
        //no of columns = row number for each line here 
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        //for line break
        cout << endl;
    }
    
    return 0;
}