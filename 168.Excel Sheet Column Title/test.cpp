/*
把 A~Z 对应 0 ~ 25
满 26 进 1
只要看当前 n-1 的值是否 /26 != 0
如果是的 则 将 (n-1) % 26 + 'A' 存储在 s 之前
如果不是 则 退出 while 循环
A            0              0
B            1              1
···
Z           25             25
AA       1   0  26 * 1 + 0 26
AB       1   1  26 * 1 + 1 27
'''
BA       1   0  26 * 2 + 0 
BB       1   1
AAA  1   0   0

*/


class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n) {
            s = (char)((n - 1) % 26 + 'A') + s;
            n = (n - 1) / 26;
        }
        return s;
    }
};
