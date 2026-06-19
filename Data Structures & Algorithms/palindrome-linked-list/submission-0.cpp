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
    bool isPalindrome(ListNode* head) {
        ListNode* s=head, *f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
        ListNode *p=nullptr;
        while(s){
            ListNode* t=s->next;
            s->next=p;
            p=s;
            s=t;
        }
        ListNode *l=head, *r=p;
        while(r){
            if(l->val!=r->val) return false;
            l=l->next;
            r=r->next;
        }
        return true;
    }
};