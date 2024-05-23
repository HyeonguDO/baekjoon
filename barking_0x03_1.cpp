/*****
 배열의 성질
 1. O(1)에 k번째 원소를 확인/변경 가능
 2. 추가적으로 소모되는 메모리의 양(=overhead)가 거의 없음
 3. Cache hit rate가 높음. 
 4. 메모리 상에서 연속한 구간을 잡아야하니 할당에 제약이 걸림

 임의의 위치에 있는 원소를 확인/변경 = O(1)
 원소를 끝에 추가 = O(1)
 마지막 원소를 제거 = O(1)
 임의의 위치에 원소를 추가/제거 = O(N)
 *****/

#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

// idx번째의 원소를 num으로 추가하는 함수
void insert(int idx, int num, int arr[], int& len){
    for(int i=len; i>idx; i--) arr[i] = arr[i-1];
    arr[idx] = num;
    len++;

    for(int i=0; i<len; i++) cout<<arr[i]<<" ";  //확인용 출력
}

void erase(int idx, int arr[], int& len){
    len--;
    for(int i=idx; i<len; i++) arr[i] = arr[i+1];

    for(int i=0; i<len; i++) cout<<arr[i]<<" ";  //확인용 출력
}



int main(void){
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len=6;

    insert(3, 60, arr, len);
    cout << "\n";
    erase(4, arr, len);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // 배열을 초기화하는 여러 방법
    int a[21];
    int b[21][21];

    // 1. for문 이용
    for(int i=0; i<21; i++) a[i]=0;
    for(int i=0; i<21; i++){
        for(int j=0; j<21; j++){
            b[i][j]=0;
        }
    }

    // 2. algorithm STL의 fill함수 사용
    fill(a, a+21, 0);
    for(int i=0; i<21; i++){
        fill(b[i], b[i]+21, 0);
    }

}