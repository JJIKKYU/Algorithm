class Solution {
    func isPalindrome(_ x: Int) -> Bool {
        var str: String = String(x)
        
        if x < 0 {
            return false
        }

        for i in 0..<str.length {
            if str[str.index(str.startIndex, offsetBy: i)] != str[str.index(str.endIndex, offsetBy: -i-1)] {
                return false
            }
        }
        
        return true
    }
}