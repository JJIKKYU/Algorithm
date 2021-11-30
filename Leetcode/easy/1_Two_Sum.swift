class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var sol: [Int] = []
        
        for i in 0..<(nums.count-1) {
            for j in i+1..<nums.count {
                if nums[i] + nums[j] == target {
                    sol.append(i)
                    sol.append(j)
                    break
                }
            }
        }
        
        return sol;
    }
}