#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    int arr1[9] = {}; int arr2[7] = {};
    for(int i=0; i<9; i++) cin >> arr1[i];

    // 2개 수를 제외하는 모든 경우의 수 계산
    for(int a=0; a<8; a++){
        int total = 0;
        for(int b=a+1; b<9; b++){
            total = 0;

            // a,b 인덱스를 통해 1개씩 제외하는 과정 후 7개의 배열 저장하기
            for(int c=0, i=0; c<9; c++) if(c!=a && c!=b) arr2[i++] = arr1[c];
            for(int i=0; i<7; i++) total += arr2[i];

            if(total == 100) break;
        }
        if(total == 100) break;
    }
    sort(arr2, arr2+7, less<int>());                  // 세번째인자 less<자료형>()은 오름차순, greater<자료형>()은 내림차순
    for(int i=0; i<7; i++) cout << arr2[i] << ' ';
}