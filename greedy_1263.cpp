#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b){             // pair의 두번째 수 내림차순 정렬 판단용 함수
    return a.second > b.second; 
}

int main(){
    int n, t_i, s_i, left=0, temp=0;       // left는 여분의 시간을 의미
    cin >> n;                                   // 일 갯수 입력

    vector<pair<int, int>> v(n);                // t_i, s_i 받을 벡터쌍 정의
    for(int i=0; i<n; i++){
        cin >> t_i >> s_i;
        v.push_back({t_i, s_i});                // t_i, s_i 값 넣기
       }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++){
        if(i != 0){
            if(v[i].second >= temp) {left += v[i].second - temp;}
            else if(temp - v[i].second >= left) {left = 0;}
            else if(temp - v[i].second < left) {left -= temp - v[i].second;}
        }
        temp = v[i].second - v[i].first;
    }
    if (left > 0 ) {temp -= left;}

    if(temp<0){cout << -1;} 
    else {cout << temp;}
    
    return 0;
}