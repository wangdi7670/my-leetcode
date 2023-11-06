#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;        
        ListNode *temp2 = headB;        

        while (temp1 != temp2) {
            if (temp1->next == temp2->next) {
                return temp1->next;
            }
            temp1 = temp1->next;
            if (temp1 == nullptr) {
                temp1 = headB;
            }

            temp2 = temp2->next;
            if (temp2 == nullptr) {
                temp2 = headA;
            }
        }

        return temp1;
    }
};

int main(int argc, char* argv[]) {
    
    return 0;
}