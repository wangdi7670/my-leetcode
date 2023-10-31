#include <iostream>
#include <set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::set<ListNode*> s;
        ListNode* temp = head;

        while (temp != nullptr) {
            if (s.count(temp)) {
                return true;
            }
            s.insert(temp);
            temp = temp->next;
        }

        return false;
    }
};


int main(int argc, char* argv[]){
    
    return 0;
}