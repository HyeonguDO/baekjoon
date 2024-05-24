#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, ans_Y=0, ans_M=0; 
    cin >> n;
    int arr_M[10000]={}; int arr_Y[10000]={};

    for(int i=0; i<n; i++) cin >> arr_M[i];
    copy(arr_M, arr_M+n, arr_Y);

    for(int i=0; i<n; i++){
        ans_Y += ((arr_Y[i]/30)+1) * 10;
        ans_M += ((arr_M[i]/60)+1) * 15; 
    }

    if(ans_Y < ans_M) cout << "Y " << ans_Y;
    else if(ans_Y > ans_M) cout << "M " << ans_M;
    else cout << "Y M " << ans_Y;
}