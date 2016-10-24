#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

vector<int> factors;

int getFirstTriangle(const int n)
{
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << getFirstTriangle(n) << endl;
    }
    return 0;
}
