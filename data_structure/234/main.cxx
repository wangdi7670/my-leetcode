#include <iostream>
#include <stack>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::stack<int> stack{};
        int n = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }

        temp = head;
        for (int i = 0; i < n/2; i++) {
            stack.push(temp->val);
            temp = temp->next;
        }

        if (n % 2 == 1) {
            temp = temp->next;
        }

        while (!stack.empty() && temp) {
            if (stack.top() == temp->val) {
                stack.pop();
            } else {
                return false;
            }
            temp = temp->next;
        }

        return true;
    }
};


int main(int argc, char* argv[]) {
    int i = 1;
    int n = 3;

    int t = n / 2;

    bool b = i <= n/2;

    std::cout << b << "\n";
    return 0;
}