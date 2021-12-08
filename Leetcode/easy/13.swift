class Solution {
    func romanToInt(_ s: String) -> Int {
        let numerals: [Character: Int] = [
                                          "I": 1,
                                          "V": 5,
                                          "X": 10,
                                          "L": 50,
                                          "C": 100,
                                          "D": 500,
                                          "M": 1000
                                         ]
        
        let arr = Array(s)
        var num = 0
        var i = 0
        
        while i < arr.count - 1 {
            let value = numerals[arr[i]]!
            let next = numerals[arr[i+1]]!
            
            num += (value < next) ? -value : value
            
            i += 1
        }
        
        num += numerals[arr.last!]!
        
        return num
    }
}

