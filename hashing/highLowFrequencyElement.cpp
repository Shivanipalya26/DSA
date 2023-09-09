#include<bits/stdc++.h>
using namespace std;


//using two loops
void countFreq(int arr[], int n){

    vector<bool> visited(n,false);
    int maxFreq = 0;
    int maxEle = 0;
    int minFreq = n;
    int minEle = 0;

    for(int i = 0; i < n; i++){
        if(visited[i] == true)
            continue;
        
        int count = 1;
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }

        if(count > maxFreq){
            maxEle = arr[i];
            maxFreq = count;
        }

        if(count < minFreq){
            minEle = arr[i];
            minFreq = count; 
        }
    }
    cout << "Highest frequency of the Element :" << maxEle << endl;
    cout << "Lowest frequency of the Element :" << minEle << endl;
}

//Time complexity - O(N*N)
//Space complexity - O(N)


//using map
void Frequency(int arr[], int n) {

    unordered_map<int,int> mp;
    int maxFreq1 = 0;
    int maxEle1 = 0;
    int minFreq1 = n;
    int minEle1 = 0;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto it : mp){
        int count = it.second;
        int element = it.first;

        if(count > maxFreq1){
            maxEle1 = element;
            maxFreq1 = count;
        }
        if(count < minFreq1){
            minEle1 = element;
            minFreq1 = count;
        }
    }
    cout << "Highest frequency of the Element :" << maxEle1 << endl;
    cout << "Lowest frequency of the Element :" << minEle1 << endl; 
}

//Time complexity - O(N)  - The insertion and retrieval operation in the map takes O(1) time
//Space complexity - O(N) - It is for the map we are using


int main() {
    int arr[] =  {1,3,4,1,4,1,1,3,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    countFreq(arr,n);
    Frequency(arr, n);
}