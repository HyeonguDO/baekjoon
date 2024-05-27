#include<iostream>
#include<string>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin, str);

    for(char a='a'; a<='z'; a++){
        int cnt=0;
        for(auto c:str){
            if(c==a) cnt++;
        }
        cout << cnt << " ";
    }
}