#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    int forwardTurns = 0, backwardTurns = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == p || (i % 2 == 0 && i + 1 == p))
            break;
        if (i % 2 != 0)
            forwardTurns++;
    }
    
    for (int i = n; i > 0; i--) {
        if (i == p || (i % 2 != 0 && i - 1 == p))
            break;
        if (i % 2 == 0)
            backwardTurns++;
    }
    
    return forwardTurns < backwardTurns ? forwardTurns : backwardTurns;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
