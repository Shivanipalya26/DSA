#include<iostream>
using namespace std;

//Parameterised Recursion

void sumOfN(int n, int sum){
    if(n < 1){
        cout << sum;
        return;
    }
    sumOfN(n-1, sum+n);
}

//Functional Recursion

int sumFunc(int n){
    if(n == 0)
        return 0;

    return n + sumFunc(n-1);
}

int main() {
    int n;
    int sum = 0;
    cin >> n;
    //sumOfN(n,sum);
    cout << sumFunc(n);
    return 0;
}