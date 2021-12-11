class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> rt;
        TreeNode* cur = root;
        TreeNode* newRoot = nullptr;
        TreeNode* temp = nullptr;
        
        // 노드가 nullptr이 아닐때까지 반복
        while (cur != nullptr) {
            // 왼쪽 자식 노드가 없을때까지 탐색
            if (cur->left != nullptr) {
                newRoot = cur->left;
                temp = newRoot;
                // 오른쪽 노드가 없을때까지 탐색
                while (temp->right != nullptr) {
                    temp = temp->right;
                }
                // 다시 위의 노드로 올라갈 수 있도록 길을 만들어줌
                temp->right = cur;
                // 리프노드이기 때문에 왼쪽 노드는 없음
                cur->left = nullptr;
                cur = newRoot;
            } else {
                rt.push_back(cur->val);
                cur = cur->right;
            }
        }
        
        return rt;
    }
};