#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (!list1 || !list2)
        return list1 ? list1 : list2;
    if (list1->val > list2->val)
        swap(list1, list2);
    list1->next = mergeTwoLists(list1->next, list2);
    return list1;
}

// Helper to print the list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // List 1: 1 -> 3 -> 5
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // List 2: 2 -> 4 -> 6
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode* merged = mergeTwoLists(list1, list2);
    printList(merged); // Output: 1 2 3 4 5 6
}


// Or use class
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if (!list1 || !list2)
//       return list1 ? list1 : list2;
//     if (list1->val > list2->val)
//       swap(list1, list2);
//     list1->next = mergeTwoLists(list1->next, list2);
//     return list1;
//     }
// };