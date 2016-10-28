#include <iostream>

using namespace std;

int max_prod (const string num, const int n, const int k)
{
    int max = -1;
    for (int i = 0; i < n - k; i++)
    {
        int val = 1;
        for (int j = 0; j < k; j++)
        {
            val *= num[i+j] - '0';    
        }
        max = (val > max) ? val : max;
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        cout << max_prod(num, n, k) << endl;
    }
    return 0;
}