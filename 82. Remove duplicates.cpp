class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode *main= new ListNode(0, head),
                 *prev=main,
                 *curr=head;
        
        //while(head->val==)
        while(curr){
            if(curr->next and curr->val==curr->next->val){
                while(curr->next and curr->val==curr->next->val){
                    curr=curr->next;
                }
                prev->next=curr->next;
            }else{
                prev=prev->next;
            }
            curr=curr->next;
        }
        return main->next;
    }
};
