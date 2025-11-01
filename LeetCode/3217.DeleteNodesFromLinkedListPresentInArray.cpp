#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0, head);
        for (ListNode* pre = dummy; pre->next;) {
            if (s.count(pre->next->val)) {
                pre->next = pre->next->next;
            } else {
                pre = pre->next;
            }
        }
        return dummy->next;
    }
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() {
    Solution sol;
    vector<int> nums = {2, 4};
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    
    ListNode* modifiedHead = sol.modifiedList(nums, head);
    
    // Print modified list
    for (ListNode* curr = modifiedHead; curr != nullptr; curr = curr->next) {
        cout << curr->val << " ";
    }
    cout << endl;

    return 0;
}