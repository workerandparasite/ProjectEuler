#include <iostream>

using namespace std;

long long int get_multiples_3_5 (const int n)
{
    long long int three = (n-1)/3;
    long long int five = (n-1)/5;
    long long int fifteen = (n-1)/15;
    return (3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2));
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << get_multiples_3_5(n) << endl;
    }
    return 0;
}