/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode(0);
        temp -> next = head;
        ListNode* curr = temp;
        while (curr -> next != nullptr) {
            if (curr -> next -> val == val) {
                ListNode* toDelete = curr -> next;
                curr -> next = curr -> next -> next;
                delete toDelete;
            }else{
                curr = curr -> next;
            }
        }
           ListNode* newHead = temp-> next;
        delete temp;
        return newHead;
    }
};