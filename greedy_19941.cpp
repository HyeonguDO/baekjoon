#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, K, ans=0;                // N: 문자열 수, K: 인접가능 한 범위
    char c;    
    vector<char> str_vec;                 // 입력 받을 문자열
    cin >> N >> K;
    for(int i=0; i<N; i++) {
        cin >> c;
        str_vec.push_back(c);
    }

    for(int i=0; i<N; i++){
        if(str_vec[i] !='P') continue;
        for(int j=i-K; j<=i+K; j++){
            if(0 <= j && j<N && str_vec[j]=='H'){
                str_vec[j] = '0';
                ans++;
                break;
            }
        }
    }
    
    cout << ans;

    return 0;
}