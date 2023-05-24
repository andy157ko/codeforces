#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    string numbers[(s.length()+1)/2];
    for( int i = 0; i < s.length(); i+=2){
        numbers[i/2] = s.substr(i, 1);
    }
    sort(numbers, numbers + (s.length()+1) / 2);
    for(int i = 0; i < s.length()/2 + 1; i++){
        if (i < s.length()/2){
            cout << numbers[i] << "+";
        }
        else{
            cout << numbers[i];
        }
    }
}