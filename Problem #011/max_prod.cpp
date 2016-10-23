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


static const int NUMBER_ELEMS = 4;

using namespace std;

int maxProduct (const vector<vector<int> >& m)
{
    int max = -1; 

    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
//            cout << "i " << i << " j " << j << endl;
            if ((m[i].size()-j) >= NUMBER_ELEMS)
            {     
//                cout << "1st if " << endl;
                int val = 1;
                for (int k = 0; k < NUMBER_ELEMS; k++) {
                    val *= m[i][j+k]; 
                }
                if (val > max)
                    max = val;
            }
            // down vertical
            if ((m.size()-i) >= NUMBER_ELEMS) 
            {
//                cout << "2nd if " << endl;
                int val = 1;
                for (int k = 0; k < NUMBER_ELEMS; k++) {
                    val *= m[i+k][j]; 
                }
                if (val > max)
                    max = val;
            }
            // right-down diagonal
            if (((m[i].size()-j) >= NUMBER_ELEMS) &&
                 ((m.size()-i) >= NUMBER_ELEMS))
            {     
//                cout << "1st if " << endl;
                int val = 1;
                for (int k = 0; k < NUMBER_ELEMS; k++) {
                    val *= m[i+k][j+k]; 
                }
                if (val > max)
                    max = val;
            }
            // left-down diagonal
            if ((j >= NUMBER_ELEMS) && (((m.size()-i) >= NUMBER_ELEMS))) 
            {
//                cout << "2nd if " << endl;
                int val = 1;
                for (int k = 0; k < NUMBER_ELEMS; k++) {
                    val *= m[i+k][j-k]; 
                }
                if (val > max)
                    max = val;
            }
        }
    }
    
    return max;
}

int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
       for(int grid_j = 0;grid_j < 20;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << maxProduct(grid) << endl;
    return 0;
}
