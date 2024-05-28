#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);

    int student_num, max_num, cnt=0;
    cin >> student_num >> max_num;
    
    int arr[6][2]={};
    for(int i=0; i<student_num; i++){
        int s, year;
        cin >> s >> year;
        arr[year-1][s]++;
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<2; j++){
            cnt += arr[i][j]/max_num;
            if(arr[i][j]%max_num) cnt++;
        }
    }
    cout << cnt << " ";
    
}