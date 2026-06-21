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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* c=head;
        int cnt=1;
        while(c->next){
            cnt++;
            c=c->next;
        }
        k=k%cnt;
        ListNode* t=head;
        for(int i=1;i<cnt-k;i++){
            t=t->next;
        }
        c->next=head;
        head=t->next;
        t->next=nullptr;
        return head;
    }
};