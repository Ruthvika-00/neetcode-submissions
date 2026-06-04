
class Node {
    public:
        int key;
        int val;
        Node* next;
        Node* prev;

        Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
private:
    int cap;
    unordered_map<int,Node*> cache;
    Node* l;
    Node* r;

    void remove(Node* node){
        Node* prv = node->prev;
        Node* nxt = node->next;
        prv->next = nxt;
        nxt->prev = prv;
    }

    void insert(Node* node){
        Node* prv = r->prev;
        prv->next = node;
        node->prev = prv;
        node->next = r;
        r->prev = node;
    }

public:
    
    LRUCache(int capacity) {
        cap = capacity;
        cache.clear();
        l = new Node(0,0);
        r = new Node(0,0);
        l->next = r;
        r->prev = l;
    }
    
    int get(int key) {
        if(cache.find(key)!=cache.end()){
            Node* node = cache[key];
            remove(node);
            insert(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.find(key)!=cache.end()){
            remove(cache[key]);
        }
        Node* newnode = new Node(key,value);
        cache[key] = newnode;
        insert(newnode);

        if(cache.size()>cap){
            Node* lru = l->next;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }
    }
};
