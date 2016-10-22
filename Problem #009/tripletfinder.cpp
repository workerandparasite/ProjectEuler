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

bool sumIsOk (int a, int b, int c, int N)
{
    return (a+b+c==N);
}


bool isTriplet (int a, int b, int c)
{
    return ((a*a+b*b)==(c*c));
}

int findTriplet (int N)
{
    int max = -1;
    
    for (int i = 0; i < N-2;i++)
        for (int j = i + 1; j < N-1; j++)
            for (int  k = j + 1; k < N; k++)
            {
                if (isTriplet(i,j,k) && (sumIsOk(i,j,k,N)))
                {
                    if (i*j*k > max)
                    {
                        max = i*j*k;
                    }
                }
            }
    
    return max;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << findTriplet (n) << endl;
    }

    return 0;
}