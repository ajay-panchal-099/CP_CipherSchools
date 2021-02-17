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
     ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while( head != NULL){ 
          ListNode* Next = head->next;
          head->next = prev;
          prev = head;
          head =Next;
        }
        
       return prev; 
    }
    
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL and fast->next != NULL){ 
            slow = slow->next;
            fast= fast->next->next;
        }
        
        ListNode* rv = reverseList(slow);
        fast = head;
        while(fast != NULL && rv != NULL){ 
         
          if(fast->val != rv->val)
              return false;
            
           rv = rv->next;
           fast = fast->next;
        }
        
        return true;
        
    }
};