#include<iostream>
#include<cmath>
#include<array>

using namespace std;

// 주어진 N이 3 또는 5의 배수일 경우 모든 수의 합을 나타내는 함수
int func1(int N){
    int ans=0;

    for(int i=1; i<=N; i++){
        if(i%3==0 || i%5==0) ans += i;
    }

    cout << ans;
    return ans;    
}

// 주어진 배열의 모든 값의 합이 100이상이면 1 그외는 0을 반환하는 함수
int func2(int arr[], int N){
    int ans=0;

    for(int i=0; i<N; i++){
        ans += arr[i];
    }
    cout << ans;

    if(ans >= 100) return 1;
    else return 0;
}

// 주어진 수 N이 제곱수이면 1, 그 외는 0을 반환하는 함수
int func3(int N){
    int root;
    root = sqrt(N);
    return root*root == N ? 1:0;
}

// N이하의 수에서 가장 큰 2의 거듭제곱을 반환하는 함수 // N은 10억 이하의 자연수
int func4(int N){
    int compare;
    for(int i=0; i<40; i++){
        if(N >= pow(2,i)) {
            compare = pow(2,i);};
            }
    return compare;
}

int main() {
    int N;
    cin >> N;
    func4(N);
    }

