static int lambda0 = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

class Solution {
private:
    int getVal(const char& c) {
	    switch (c) {
	    case 'I': return 1;
	    case 'V': return 5;
	    case 'X': return 10;
	    case 'L': return 50;
	    case 'C': return 100;
	    case 'D': return 500;
	    case 'M': return 1000;
	    }
	    return 0;
    }
public:
    int romanToInt(string s) {
	    auto i = s.cbegin();
	    int prev = getVal(*i++);
	    int sum = prev;

	    for (; i < s.cend(); ++i) {
		    int curr = getVal(*i);
		    sum += curr;
		    if (prev < curr) {
			    sum -= prev * 2;
		    }
		    prev = curr;
	    }
	    return sum;
    }
};
