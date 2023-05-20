#include <iostream>
using namespace std;
int main(){
    int value = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        if ((a.substr(0,2) == "++") || (a.substr(1,3) == "++" )){
            value++;
        }
        else if ((a.substr(0,2) == "--") || (a.substr(1,3) == "--" )){
            value--;
        }
    }
    cout << value;
}