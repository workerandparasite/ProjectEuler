#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int largest_palindrome_product (int n)
{
    int largest_palin = 0; 
    char str[10] = {0};
    for (int i = 999; i >= 100; i--)
        for (int j = 999; j >= i-1; j--)
        {
            int v = i*j;
            if (v >= n)
                continue;
            if (v <= largest_palin)
                break;
            sprintf(str,"%06d",v); 
            bool reverse = true;
            for (int left = 0, right = strlen(str)-1; left < right; left++, right--)
                if (str[left] != str[right])
                    reverse = false;
            if (reverse)
                largest_palin = v;
        }
    return largest_palin;
}

int main(){
    int t;                  
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << largest_palindrome_product(n) << endl;
    }
    return 0;
}