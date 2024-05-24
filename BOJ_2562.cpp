#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[9]={};
    for(int i=0; i<9; i++) cin >> arr[i];

    // sort(arr, arr+9, less<int>());
    int *max_data = max_element(begin(arr), end(arr));
    for(int i=0; i<9; i++){
        if(arr[i]==*max_data) {
            cout << *max_data << '\n' << i+1;
        }
    }
}