#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    int tape=0, N, L, start;       // tape== answer , N==물세는 위치, L==테이프길이
    int Location[1000];

    cin >> N >> L;                                  // cin 연달아 할 때 반드시 >>로 구분 쉼표(,) 안됨
    for(int i=0; i<N; i++){cin>>Location[i];}       // 구멍 뚫린곳 입력

    sort(Location, Location+N);                     // 구멍 위치 오름차순
    start = Location[0];

    for(int i=1; i<N; i++){
        if(L <= Location[i]-start){
            tape++;
            start = Location[i];
        }
    }
    cout << tape+1;
}