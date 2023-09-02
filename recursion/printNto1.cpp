#include<iostream>
using namespace std;

/*void print(int i , int n){
    if(i < 1)
        return;
    cout << i << " ";
    print(i-1,n);
}*/

void print(int i, int n) {
    if(i > n)
        return;
    print(i+1, n);
    cout << i;
}

int main() {
    int n;
    cin >> n;
    //print(n,n);
    print(1,n);

    return 0;
}

