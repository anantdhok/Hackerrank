#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    int m = n, count = 0;
    vector<int> numbers;
    
    while (n > 0) {
        numbers.push_back(n % 10);
        n /= 10;
    }
    
    for (int i: numbers)
        if (i != 0)
            if (m % i == 0)
                count++;
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
