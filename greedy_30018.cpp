#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    vector<int> v1;      // 벡터 정의  첫번째 벡터
    vector<int> v2;      // 벡터 정의  두번째 벡터

    for (int i=0; i<num; i++){          // A벡터 입력 받기
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for (int i=0; i<num; i++){          // B벡터 입력 받기
        int b;
        cin >> b;
        v2.push_back(b);
    }

    int ans = 0;
    for(int i=0; i<v1.size(); i++){
        ans += abs(v1[i]-v2[i]);
    }
    ans = ans/2;
    cout << ans;
}


