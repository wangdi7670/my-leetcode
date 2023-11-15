#include <iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        for (int i = 0; i < k; i++) {
            if (temp2 == nullptr) {
                return head;
            }
            temp2 = temp2->next;
        }

        ListNode* temp3 = reverse(head, k);
        temp1->next = reverseKGroup(temp2, k);

        return temp3;
    }

    // 调用之前保证链表长度至少为 n
    ListNode* reverse(ListNode* head, int n) {
        ListNode* cur = head;
        ListNode* pre = nullptr;
        ListNode* next = nullptr;

        for (int i = 0; i < n; i++) {
            next = cur->next;
            cur->next = pre;

            pre = cur;
            cur = next;
        }

        return pre;
    }
};


int main(int argc, char* argv[]) {
    
    return 0;
}