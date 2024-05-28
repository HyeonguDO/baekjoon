#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    string a, b; 

    for(int i=0; i<n; i++){
        int arr[26]={};
        cin >> a >> b; 
        for(auto c:a) arr[c-'a']++;         // arr배열은 각 문자가 등장한 횟수를 저장하며 a문자에서 1씩 증가
        for(auto c:b) arr[c-'a']--;         // b문자에서 1씩 감소하며 서로 같은 문자가 있다면 +1 -1 되므로 0이 된다.
        
        bool ispossible = true;

        for(auto j:arr){
            if(j != 0) ispossible = false;
        }

        if(ispossible) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }
} 
