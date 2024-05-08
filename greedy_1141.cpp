#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int N, ans=0;
    string word[50];

    cin>>N;                                             // 단어 갯수 입력
    for(int i=0; i<N; i++){cin>>word[i];}               // 단어 입력

    sort(word, word+N);                                 // 단어 오름차순 정렬

    ans = N;
    for(int i=0; i<N; i++){
        if(word[i] == word[i+1].substr(0, word[i].size())){ 
            ans--;
        }
    }
    cout << ans;
    return 0;
}



// 단어 오름차순 정렬 시 부분집합이 되는 단어가 아래 오는 성질을 이용하여 만약 오게 되면 부분집합에서 제외시킴.