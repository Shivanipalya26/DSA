//to print all the factorials of the numbers that are less than n
//example -> n = 7 output = 1 2 6 

#include<bits/stdc++.h>
using namespace std;

vector<long long> fact(long long i, long long n,long long r){
    vector<long long> a;
    r = r * i;
    if(r > n)
        return {};
    a=fact(i+1,n,r);
    a.push_back(r);
    return a;
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    long long i = 1, r = 1;
    vector<long long> v = fact(i,n,r);
    reverse(v.begin(),v.end());
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<long long> s = factorialNumbers(n);
    for(auto it : s)
        cout << it << " ";

    return 0;
}