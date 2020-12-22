#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;
    for (char c:s)
    {
        if (c ==  'a')
        {
            count++;
        }
    }
    count=count*(n/s.length());
    string ss=s.substr(0,n%s.length());
    for (char c_s:ss)
    {
        if (c_s ==  'a')
        {
            count++;
        }
    }
    return count;
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
