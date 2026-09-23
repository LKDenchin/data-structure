#include <cstdio>
#include <cctype>

typedef int ElemType;

typedef struct {
    ElemType *data;
    int MAXSIZE, length;
} SqList;

void InitList(SqList &L, int capacity) {
    L.data = new ElemType[capacity];
    L.MAXSIZE = capacity;
    L.length = 0;
}

void DestroyList(SqList &L) {
    if (L.data != nullptr) {
        delete[] L.data;
        L.data = nullptr;
    }
    L.length = 0;
    L.MAXSIZE = 0;
}

// ---------------- 极限 I/O 模块 ----------------
namespace FastIO {
    const int BUF_SIZE = 1 << 20; // 1MB 内存缓冲区
    char in_buf[BUF_SIZE];
    char *in_p1 = in_buf, *in_p2 = in_buf;

    // 从大块内存缓冲区中取下一个字符，纯指针运算
    inline char gc() {
        if (in_p1 == in_p2) {
            in_p2 = (in_p1 = in_buf) + fread(in_buf, 1, BUF_SIZE, stdin);
            if (in_p1 == in_p2) return EOF;
        }
        return *in_p1++;
    }

    // 快读：基于 fread 缓冲区拼装整数
    inline int read() {
        int x = 0;
        char ch = gc();
        while (ch < '0' || ch > '9') ch = gc();
        while (ch >= '0' && ch <= '9') {
            x = (x << 3) + (x << 1) + (ch ^ 48); // 等价于 x * 10 + (ch - '0')
            ch = gc();
        }
        return x;
    }

    // 快写：将数字转为字符栈，避免 cout 的格式化转换
    inline void write(int x) {
        static char stk[16];
        int top = 0;
        do {
            stk[top++] = (x % 10) ^ 48;
            x /= 10;
        } while (x);
        while (top) putchar(stk[--top]);
        putchar('\n');
    }
}
using namespace FastIO;

// ---------------- 主逻辑 ----------------
int main() {
    int n = read();
    int m = read();

    SqList L;
    InitList(L, n);

    // 读入学号
    for (int i = 0; i < n; ++i) {
        L.data[i] = read();
    }
    L.length = n;

    // 回答询问
    while (m--) {
        int idx = read();
        write(L.data[idx - 1]);
    }

    DestroyList(L);
    return 0;
}