#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    while (cin >> s)
    {
        if (s == "aaa")
            break;
        int num = 0;
        int cnt = 0;
        for (char ch : s)
        {
            if (ch >= '0' && ch <= '9')
            {
                num = num * 10 + (ch - '0');
                cnt++;
                if (cnt >= 2)
                    break;
            }
        }
        sum += num;
    }

    cout << sum << endl;
    return 0;
}