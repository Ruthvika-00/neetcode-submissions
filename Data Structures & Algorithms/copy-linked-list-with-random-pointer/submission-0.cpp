/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        Node* res=new Node(0);
        Node* d=res;
        Node* n=head;
        while(n){
            if(mp.find(n)!=mp.end()){
                d->next=mp[n];
            }else{
                Node* curr= new Node(n->val);
                d->next=curr;
                mp[n]=curr;
            }
            d=d->next;
            if(mp.find(n->random)!=mp.end()){
                d->random=mp[n->random];
            }else if(n->random==nullptr){
                d->random=nullptr;
            }else{
                Node* ran= new Node(n->random->val);
                d->random=ran;
                mp[n->random]=ran;
            }
            n=n->next; 
        }
        return res->next;
    }
};
