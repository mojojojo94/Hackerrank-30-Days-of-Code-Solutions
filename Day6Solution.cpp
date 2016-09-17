#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        string inputString;
        string string1, string2;
        cin >> inputString;
        for(int j = 0; j < inputString.length(); j++){
            if(j % 2 == 0){
                string1 += s[j];
            }else{
                string2 += s[j];
            }
        }
        cout << string1 << " " << string2 << endl;
    }
    return 0;
}
