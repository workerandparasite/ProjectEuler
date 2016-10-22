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

using namespace std;


vector<bool> getPrimes(int n)
{
    vector<bool> vec(n+1, true);
    //cout << "n " << n << endl;
    for (int i = 2; i < vec.size(); ++i)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (j % i == 0)
            {
                vec[j] = false;
            }
        }
    }
    
    return vec;
}
    

int summationOfPrimes (int n)
{
    int sum = 0;
    
    vector<bool> vec (getPrimes(n));
    
    for (int i = 2; i < vec.size(); ++i)
    {
        if (vec[i]){
           // cout << "test " << i << endl;
            sum += i;
        }
    }
    
    return sum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        cout << summationOfPrimes(n) << endl;
    }
    return 0;
}