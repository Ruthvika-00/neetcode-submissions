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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return nullptr;
        ListNode* d=new ListNode(0,head);
        ListNode* l=d;
        ListNode* r=head;
        while(n>0){
            r=r->next;
            n--;
        }
        while(r){
            r=r->next;
            l=l->next;
        }
        l->next=l->next->next;
        return d->next;
    }
};
