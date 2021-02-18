#include <bits/stdc++.h>
using namespace std;

int c;

void multiply(vector<int> &f, int n) {
    for (int &i: f) {
        int p = i * n + c;
        i = p % 10;
        c = p / 10;
    }
    
    while (c) {
        f.push_back(c % 10);
        c /= 10;
    }
}

void extraLongFactorials(int n) {
    vector<int> factorial{1};
    
    while (n)
        multiply(factorial, n--);
        
    for(int i = factorial.size() - 1; i >= 0; i--)
        cout << factorial[i];
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
