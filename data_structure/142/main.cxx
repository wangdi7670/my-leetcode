#include <iostream>
#include <set>

using namespace std;

/*
环形链表
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        std::set<ListNode*> s;
        ListNode* temp = head;

        while (temp != nullptr) {
            if (s.count(temp)) {
                return temp;
            }
            s.insert(temp);
            temp = temp->next;
        }

        return nullptr;
    }
};


int main(int argc, char* argv[]){
    
    return 0;
}