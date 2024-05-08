#include <iostream>

using namespace std;

int main()
{
    float a;
    cin >> a;
    cout << fixed;          // 입력받은 소수점 자리수 까지만 쓰겠다는 선언
    cout.precision(2);      // 해당 자리수만큼 소수점 잘라주기 (그 아래 자리에서 반올림)
    cout<<a;

    return 0;
}