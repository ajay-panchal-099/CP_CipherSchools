  ListNode* slow = new ListNode(0);
        ListNode *l = slow;
        ListNode* fast = head;
        
        
        while(fast != NULL ){ 
             int x =0;
            int val = fast->val;
             
           while(fast != NULL &&  fast->val == val){ 
               fast = fast->next;
               x++;
           }
            if(x == 1 ){ 
                 l->next = new ListNode(val);
                 l = l->next;
                
            }
          
         
        }
        
        return slow->next;