#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    int num_arr[5]={}; int sum=0;
    for(int i=0; i<5; i++){ 
        cin>>num_arr[i];
        sum += num_arr[i];
    }
    sum = sum/5;
    sort(num_arr, num_arr+5, less<int>());
    cout << sum << '\n' << num_arr[2];
}