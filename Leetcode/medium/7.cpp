class Solution {
public:

    bool checkOverflow(long long num1, long long num2) {
        if (num2 < 0) num2 *= -1;
        if (num1 < 0) num1 *= -1;
        
        if (num1 > INT_MAX - num2)
            return false;
        return true;
    }        
    
        
    int reverse(int x) {
        vector<int> v;
        while (x != 0) {
            int value = x % 10;
            v.push_back(value);
            x /= 10;
        }
        
        int size = v.size();
        int index = 0;
        int result = 0;
        while (size) {
            if (checkOverflow(result, v[index] * pow(10, size -1)))
                result += v[index] * pow(10, size - 1);
            else
                return 0;
            index += 1;
            size -= 1;
        }
        
        return result;
    }
};