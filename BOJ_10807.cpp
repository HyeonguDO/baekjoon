#include<iostream>
#include<string>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    int num, srch_num, cnt=0; 
    cin>>num;
    int arr[num]={};
    for(int i=0; i<num; i++) cin >> arr[i];
    cin>>srch_num;
    for(int i=0; i<num; i++){
        if(arr[i]==srch_num) cnt++;
    }

    cout << cnt;

}