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
    ListNode* getKth(ListNode* p,int k){
        while(p && k>0){
            p=p->next;
            k--;
        }
        return p;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* d=new ListNode(0,head);
        ListNode* gp=d;
        while(true){
            ListNode* kth=getKth(gp,k);
            if(!kth) break;
            ListNode* gn=kth->next;
            ListNode* p=kth->next;
            ListNode* c=gp->next;
            while(c!=gn){
                ListNode* t=c->next;
                c->next=p;
                p=c;
                c=t;
            }
            ListNode* t=gp->next;
            gp->next=kth;
            gp=t;
        }
        return d->next;
    }
};
