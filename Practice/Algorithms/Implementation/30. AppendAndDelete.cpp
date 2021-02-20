#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int i, d;
    for (i = 0; s[i] == t[i]; i++);
    d = s.size() + t.size() - i*2;
    
    if (k == d || k >= s.size() + t.size())
        return "Yes";
    else if (d <= k && d % 2 == k % 2)
        return "Yes";
    else
        return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
