#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int i = 1;  
    int result;
    while ( i < 11){
        result = N * i;
        cout << N << " x " << i << " = " << result << endl;
        i++;
    }
          
}