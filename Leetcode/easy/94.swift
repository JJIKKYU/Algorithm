class Solution {
    func inorderTraversal(_ root: TreeNode?) -> [Int] {
        var rt = Array<Int>()
        var cur: TreeNode? = root
        var newRoot: TreeNode?
        var temp: TreeNode?
        
        while cur != nil {
            if cur?.left != nil {
                newRoot = cur?.left
                temp = newRoot
                
                while temp?.right != nil {
                    temp = temp?.right
                }
                
                temp?.right = cur
                cur?.left = nil
                cur = newRoot
            } else {
                rt.append(cur!.val)
                cur = cur?.right
            }
        }
        
        return rt
        
    }
}