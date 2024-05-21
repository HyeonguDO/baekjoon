// BOJ 10871번(X보다 작은 수)

#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int vec_num, X;
    cin >> vec_num >> X;

    vector<int> N(vec_num), ans_vec;
    for(int i=0; i<vec_num; i++) cin >> N[i];   // 벡터로 출력 받기

    for(int i=0; i<vec_num; i++){
        if(X > N[i]) ans_vec.push_back(N[i]);
    }

    for(int i=0; i<ans_vec.size(); i++) cout << ans_vec[i] << " ";
    return 0; 
}

