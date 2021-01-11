#include <bits/stdc++.h>
using namespace std;

string timeConversion(string t) {
    int hour = stoi(t.substr(0, 2));
    string zone = t.substr(8, 2);
    
    if (zone == "AM") {
        if (hour >= 12)
            hour = abs(12 - hour);
    }
    else
        if (hour < 12)
        hour = 12 + hour;
    
    return ((hour < 10) ? "0" + to_string(hour) : to_string(hour)) + t.substr(2, 6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
