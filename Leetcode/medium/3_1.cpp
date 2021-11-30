#include <set>
#include <math.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        
        int result = 0;
        // 완전탐색으로 하나하나 겹치는지 확인
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (checkRepeat(s, i, j)) {
                    result = max(result, j - i + 1);
                }
            }
        }
        
        return result;
    }
    
    // 빈배열을 만들어서 아스키코드를 활용해 1 이상이면 겹치는 것으로 판단하고 false return
    bool checkRepeat(string& s, int start, int end) {
        vector<int> chars(128);
        
        for (int i = start; i < end + 1; ++i) {
            char c = s[i];
            chars[c]++;
            
            if (chars[c] > 1) {
                return false;
            }
        }
        
        return true;
    }
};