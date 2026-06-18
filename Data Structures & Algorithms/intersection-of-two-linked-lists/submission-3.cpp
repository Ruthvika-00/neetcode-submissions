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
        unordered_set<ListNode*> hs;
        for(ListNode *it=headA;it!=nullptr;it=it->next){
            hs.insert(it);
        }
        for(ListNode* it=headB;it!=nullptr;it=it->next){
            if(hs.find(it)!=hs.end()) return it;
        }
        return nullptr;
    }
};