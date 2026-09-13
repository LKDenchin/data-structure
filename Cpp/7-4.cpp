#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int mat[10][10] = {0};
        int cnt = 1;
        // 按斜线方向填充数据
        for (int k = 0; k < n; ++k)
        {
            for (int i = k, j = 0; i >= 0 && j <= k; --i, ++j)
            {
                mat[i][j] = cnt++;
            }
        }
        // 逐行输出
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                if (j > 0) cout << " ";
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}