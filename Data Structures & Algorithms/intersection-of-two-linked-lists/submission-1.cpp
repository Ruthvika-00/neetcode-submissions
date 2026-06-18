/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* l1=headA;
        ListNode* l2=headB;
        unordered_set<ListNode*> a;
        unordered_set<ListNode*> b;
        while(l1 || l2){
            if(l2 && a.find(l2)!=a.end()){
                return l2;
            }else{
                b.insert(l2);
            }
            if(l1 && b.find(l1)!=b.end()){
                return l1;
            }else{
                a.insert(l1);
            }
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        return nullptr;
    }
};