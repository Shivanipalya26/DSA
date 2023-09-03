#include<bits/stdc++.h>
using namespace std;

// reversed array using two variables i.e. l and r

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
}

/*void reverseArray(int l, int arr[], int r){
    if(l >= r)
        return;
    swap(arr[l],arr[r]);
    reverseArray(l+1,arr,r-1);
}*/

//reversed array using one pointer

void reverseArr(int i,int arr[], int n){
    if(i >= n/2)
        return;
    swap(arr[i],arr[n-i-1]);
    reverseArr(i+1,arr,n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l = 0;
    //reverseArray(0,arr,n-1);
    reverseArr(0,arr,n);
    printArray(arr,n);
}