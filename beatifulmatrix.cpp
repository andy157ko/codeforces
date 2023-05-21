#include <iostream>
using namespace std;
int main(){
    int count = 0;
    int col = 0;
    int row = 0;
    int arr[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    count = abs(2 - row) + abs(2 - col);
    cout << count;
}

//input
// 0 0 0 0 0
// 0 0 0 0 1
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// output
// 3