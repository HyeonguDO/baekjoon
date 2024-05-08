#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans=1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
  cout << ans;
  return 0;
}



// 점수가 최소가 되는 청정수열의 개수는 -> 같은 수가 연달아 붙어있는 수열들을 의미
// 같은 수를 하나로 생각하면 ex) N=3 일 때 -> 123, 132, 213, 231, 312, 321로 6개 따라서 N!이 정답이다.