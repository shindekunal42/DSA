class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Map to store the next greater element for each number in nums2
        unordered_map<int, int> m;
        stack<int> s;

        // Traverse nums2 from right to left to compute next greater elements
        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Pop smaller elements from the stack
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }

            // If stack is empty, no greater element exists
            if (s.empty()) {
                m[nums2[i]] = -1;
            } else {
                m[nums2[i]] = s.top(); // Top element is the next greater
            }

            // Push current element to stack
            s.push(nums2[i]);
        }

        // Construct the result for nums1 using the map
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(m[nums1[i]]);
        }

        // Return the final result
        return ans;
    }
};
