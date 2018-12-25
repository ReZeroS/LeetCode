// 方法2：C++版本
// 通过数学规律算出每行的字符，下一个顶点在上一个顶点的2*numRows - 2位置，所以：
// 第一行会是k * (2*numRows - 2)
// 最后一行会是k * (2*numRows - 2) + numRows - 1
// 中间部分在第i行会是k * (2*numRows - 2) + i和(k + 1) * (2*numRows - 2) - i
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        
        string ret;
        int n = s.length();
        int cycleLen = 2 * numRows - 2;                     // 每个周期的长度间隔
        
        for (int i = 0; i < numRows; i++) {                 // 遍历每一行
            for (int j = 0; j + i < n; j += cycleLen) {     // j记录增加的周期数
                ret += s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                    ret += s[j + cycleLen - i];
            }
        }
        return ret; 
    }
};                                                          // 注意加分号
