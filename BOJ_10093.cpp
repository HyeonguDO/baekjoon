#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    long long num1, num2;

    cin >> num1 >> num2;
    if(num1>num2) swap(num1, num2);
    if(num1==num2 || num2-num1==1) cout << 0;
    else{
        cout << num2 - num1 -1 << '\n';
        for(long long i=num1+1; i<num2; i++) cout << i << ' ';
    }
}   