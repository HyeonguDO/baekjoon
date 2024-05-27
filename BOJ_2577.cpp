#include<iostream>
#include<string>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a*b*c;
    string sum_str = to_string(sum);

    for(char i='0'; i<='9'; i++){
        int cnt=0;
        for(auto c:sum_str){
            if(i==c) cnt++;
        }
        cout << cnt << '\n';
    }
}