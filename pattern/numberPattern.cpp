#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter input :";
    cin >> n;

    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1; j++) {
            // Initialising the top, down, left and right indices of a cell
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) -i;

            // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
            cout << n - (min(min(top,bottom),min(left,right)));
        }
        cout << endl;
    }
}