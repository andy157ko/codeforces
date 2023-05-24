#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int count = 0;
    string a;
    cin >> a;
    vector<char> id;

    for (int i = 0; i < a.length(); i++){
        if (find(id.begin(), id.end(), a[i]) == id.end()){
            id.push_back(a[i]);
        }
    }
    count = id.size();

    if (count % 2 == 1){
        cout << "IGNORE HIM!";
    }
    else if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    }

}