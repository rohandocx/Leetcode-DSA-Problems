class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp =head;
        int ln = 0;
		
        while(tmp){
            ln++;
            tmp = tmp->next;
        }
	
        if(ln == 1)
            return NULL;
		
        if(ln == n)
            return head->next;
        tmp = head;
        int cnt = 0;
		
        while(tmp->next != NULL && ln - cnt != n + 1){
            cnt++;
            tmp = tmp->next;
        }
        
        ListNode* node_to_be_deleted = tmp->next;
       
		tmp->next = node_to_be_deleted->next;
        delete(node_to_be_deleted);
        return head;
    }
};
