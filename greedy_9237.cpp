#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int n, mmax=0;
    cin>>n;                                             // 묘목 갯수 받기

    vector<int> v1(n), v2(n); 
    for(int i=0; i<n; i++) {cin >> v1[i];}              // 벡터로 입력 받기
    
    sort(v1.begin(), v1.end(), greater<int>());           // 내림차순으로 정렬 

    for(int i=0; i<v1.size(); i++){
        v1[i] += i;                                     // 내림차순 된 벡터에 앞자리 채워주기
    }

    // for(int i=0; i<v1.size(); i++){cout <<v1[i] <<" ";}  // 출력 확인용

    for(int i=0; i<v1.size(); i++){
        mmax = max(v1[i], mmax);
        }
    cout << mmax + 2 << endl;    
}


// 4개  나무 갯수
// 2 3 4 3 나무 자라는 시간
// 4 3 3 2 실제 심는 순서 -> 심는데 하루 걸림
// 0 4 4 4 4 
//   0 3 3 3
//     0 3 3 3
//       0 2 2 초대날
// -> 7일 소요

// 1. 입력 받기 -> sort로 내림차순 정렬
// 2. i+(i번째의 생장기간) +2 가 정답


// 4 4 4 4
//   3 3 3
//     3 3 3
//       2 2
// 0 + 0번째의 생장기간 4
// 1 + 1번째의 생장기간 1+3
// 2+ 2번째의 생장기간 2+3
// ...
// 3 + 3번째의 생장기간 = 3+2 = 5
// -> 첫째날, 초대날 더하면 = 5+2 = 7
