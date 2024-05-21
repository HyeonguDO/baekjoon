// 공백을 포함한 string 값 입력받기
// C++에서 cin을 활용하여 string 값을 받을 때 보통 공백 이전까지만 값을 저장함. -> 아래 코드 참조

#include<iostream>

using namespace std;

int main(void){
    string s;
    cout << "input is ";            // input이 hi hello로 가정
    cin >> s;
    cout << "s is " << s << endl;

    // input : hi hello
    // cout result: s is hi -> 공백 이전의 문자열 까지만 저장된 것을 확인 가능


    // 공백이 포함된 문자열의 입력을 받기위해 'getline' 함수를 이용하자.    
    string s;
    getline(cin, s);
    cout << s;

    // input : hi hello
    // cout result: hi hello -> 공백 이후의 문자열 까지 저장된 것을 확인 가능

    ios::sync_with_stdio(0); cin.tie(0); 
    /**** 
     cin, cout의 경우 입출력이 많을 때 시간초과를 막기 위해 
     c에서 사용하는 scanf, printf와의 동기화를 끊는 것이 코드 처리 시간적 부분에서 유리함을 가져갈 수 있음.

     따라서 main함수 시작 부분에 c와 c++사이의 동기화를 끊는 코드인
     ios::sync_with_stdio(0), cin.tie(0) 을 적어주는 것이 좋다!

     주의) 위 코드를 써서 C, C++의 동기화를 끊었다면 printf(scanf)와 cout(cin)을 섞어서 쓰면 절대 안됨!!! 순서 꼬여서 나옴.
     *****/

    /*****
     cin.tie(0); 명령어는 cin 명령을 수행하기 전에 cout의 버퍼를 비우지 않도록 하는 코드로 
     코드의 실행속도를 향상 시켜줌.(코딩 테스트 한정!!)  
    *****/

    /******
     std::endl; -> 절대 쓰지말기!!!!!!!!!
     endl은 개행문자("\n")을 출력하고 출력버퍼를 비우라는 명령어이다.

     따라서, cin.tie(0);을 쓰는 이유와 같이 코딩테스트에서는 출력버퍼를 비울 필요가 없기 때문에 그냥 "\n"을 쓰도록하자.   
    ******/
}   





