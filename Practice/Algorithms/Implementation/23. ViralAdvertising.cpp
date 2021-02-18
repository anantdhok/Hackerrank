#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int recipients = 5, likes = 0;
    for (int i = n; i > 0; i--) {
        likes += floor(recipients / 2);
        recipients = 3 * floor(recipients / 2);
    }
    return likes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
