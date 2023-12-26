class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode* a=headA;
        ListNode* b= headB;
        while(a!=b){
            
            //check for if a is null to a ko headB per point kar do and 
            //jab b NULL ho jaye to b ko heada per point kar do  
            if(a==NULL){
                a=headB;
            }
            else{
                a=a->next;
            }
            
            if(b==NULL){
                b=headA;
            }
            else{
                b=b->next;
            }
        }
        return a;
    }
};
