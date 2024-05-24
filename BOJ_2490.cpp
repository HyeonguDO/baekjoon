#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[3][4]={}; int cnt=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++) cin >> arr[i][j];}

    for(int i=0; i<3; i++){
        cnt = 0;
        for(int j=0; j<4; j++){
            cnt += arr[i][j];
        } 
        if(cnt==0) cout << "D" << '\n';           //윷 cnt==0
        else if(cnt==1) cout << "C" << '\n';      //걸 cnt==1
        else if(cnt==2) cout << "B" << '\n';      //개 cnt==2
        else if(cnt==3) cout << "A" << '\n';      //도 cnt==3
        else if(cnt==4) cout << "E" << '\n';      //모 cnt==4
    }
}