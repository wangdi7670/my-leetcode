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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == 1) {
            return reverse(head, right-left+1);
        }

        ListNode* temp = head;

        for (int i = 0; i < left-2; i++) {
            temp = temp->next;
        }

        temp->next = reverse(temp->next, right-left+1);

        return head;
    }

    ListNode* reverse(ListNode* head, int count) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* next = nullptr;

        for (int i = 0; i < count; i++) {
            next = cur->next;
            cur->next = pre;

            pre = cur;
            cur = next;
        }

        head->next = cur;
        return pre;
    }
};


int main(int argc, char* argv[]) {
    
    return 0;
}