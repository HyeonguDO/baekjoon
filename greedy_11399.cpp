#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
    int num, ans=0;
    cin >> num;
    vector<int> time(num);
    for(int i=0; i<num; i++) {cin>>time[i];}            // 입력받기

    sort(time.begin(), time.end());                     // 오름차순으로 정리

    for(int i=0; i<time.size(); i++){
        ans += time[i]*(num-i);
    }
    cout << ans;
}