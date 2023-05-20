#include <iostream>
using namespace std;
int main(){
    int count = 0;
    int n , k;
    cin >> n >> k;

    int* scores = new int[n];
    for (int i = 0; i < n; i++){
        cin >> scores[i];
    }

    int v = scores[k-1];
    
    
    for (int i = 0; i < n; i++){
        if (scores[i] >= v && scores[i] > 0){
            count++;
        }
    }
    cout << count;
}