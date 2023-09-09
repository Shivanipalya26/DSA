#include<bits/stdc++.h>
using namespace std;


//Using two loops
void countFreq(int arr[], int n){
    vector<bool> visited(n,false);

    for(int i = 0; i < n; i++){

        // Skip this element if already processed
        if(visited[i] == true)
            continue;
        

        // Count frequency
        int count = 1;

        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]) {  
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

//Time Complexity: O(N*N)
//Space Complexity:  O(N)



//Using Map
void Frequency(int arr[], int n){
    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Traverse through map and print frequencies
    for(auto x : mp)
        cout << x.first << " " << x.second << endl;
}

//Time Complexity: O(N)
//Space Complexity: O(n)



int main() {
    int arr[10] = {1,3,4,1,5,1,1,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr, n);
    Frequency(arr,n);
}


