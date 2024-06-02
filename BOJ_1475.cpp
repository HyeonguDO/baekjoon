#include<iostream>
#include<string>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    string n; int arr[10]={}, cnt=0;
    cin >> n;
    
    for(char i='0'; i<='9'; i++){
        for(auto c:n){
            if(i==c) arr[i-'0']++;
        }
        // cout << arr[i-'0'] << " ";
    }    

    for(int i=0; i<=9; i++){
        if(i==6 || i==9) continue; 
        cnt = max(cnt, arr[i]);   
    }
    cnt = max(cnt, (arr[6]+arr[9]+1)/2);
    
    cout << cnt;
}
