#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[20]={};

    for(int i=1; i<=20; i++) arr[i-1]=i; 

    for(int i=1; i<=10; i++){
        int a, b;
        cin >> a >> b;
        reverse(arr+a-1, arr+b);
    }

    for(int i=0; i<20; i++) cout << arr[i] << ' ';
}


// algorithm STL에 포함된 reverse 함수 사용 시 첫번째인자는 "인덱스의 시작점", 두번째 인자는 "해당 인덱스의 전" 까지 포함!!!!