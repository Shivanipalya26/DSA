#include<bits/stdc++.h>
using namespace std;

/*vector<int> printNos(int x) {
    // Write Your Code Here
    if(x == 1)
        return {1};
    vector<int> v = printNos(x-1);
    v.push_back(x);
    return v;
}*/

void print(int n){

    if(n == 0)  return;
    print(n-1);
    cout << n;
    
}

int main() {
    int n;
    cin >> n;
    print(n);
    /*vector<int> s = printNos(n);
    for(auto it :s)
        cout << it << " ";*/
}