class Solution {
public:
    Node* copyRandomList(Node* head) 
    {unordered_map<Node*,Node*> m;
    Node* iter = head;
    while(iter){
        Node* temp = new Node(iter->val);
        m[iter] = temp;
        iter = iter->next;
    }
    
    //STEP 2 : UPDATE THE NEXT AND RANDOM POINTERS ACCORDINGLY 
    iter = head;
    while(iter){
        m[iter]->next = m[iter->next];
        m[iter]->random = m[iter->random];
        iter = iter->next;
    }
    
    return m[head];
        
    }
};