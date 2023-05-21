#include <iostream>
#include <string>
using namespace std;
int main(){
    int count = 0;
    string a;
    cin >> a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    string b;
    cin >> b;
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if(a < b){
        count = -1;
    }
    else if (a > b){
        count = 1;
    }
    else count = 0;
    
    cout << count;
}