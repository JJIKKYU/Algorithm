class Solution {
    func reverse(_ x: Int) -> Int {
        let str: String = String(abs(x))
        var reverseStr: String = String(str.reversed())
        
        
        
        var result: Int = Int(reverseStr)!
        if result > Int(Int32.max) {
            return 0
        }
        
        if x < 0 {
            result *= -1
        }
        
        return result
    }
}