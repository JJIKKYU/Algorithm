#include <math.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> chars(128);
        
        int l = 0;
        int r = 0;
        
        int result = 0;
        
        // 슬라이딩 윈도우
        while (r < s.size()) {
            char rightChar = s[r];
            chars[rightChar] += 1;
            
            // 중복된 Char이 나올때까지 왼쪽 포인터를 오른쪽으로 옮김
            while (chars[rightChar] > 1) {
                char leftChar = s[l];
                chars[leftChar] -= 1;
                l += 1;
            }
            
            // 왼쪽 포인터와 오른쪽 포인터 차이만큼의 차를 통해 수를 구함
            result = max(result, r - l + 1);
            
            r += 1;
        }
        
        return result;
    }
};