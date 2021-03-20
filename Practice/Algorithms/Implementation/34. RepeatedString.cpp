#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n) {
    long c = count(s.begin(), s.end(), 'a');
    c = (n / s.length()) * c;
    
    if (n % s.length() != 0)
        for (int i = 0; i < n % s.length(); i++)
            if (s[i] == 'a')
                c++; 
    
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
