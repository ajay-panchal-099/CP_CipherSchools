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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans= new ListNode(0);
        ListNode* head = ans;
         int carry = 0;
        while(l1 and l2){ 
         
           int x = l1->val;
           int y = l2->val;
            l1 = l1->next;
            l2 = l2->next; 
            int v = x+ y+ carry;
            carry = (v) /10;
            int r = (v) %10;
            ans->next = new ListNode(r);
            ans = ans->next;
            
        }
        while(l1){ 
           int x = l1->val;
             l1 = l1->next;
            int v = x+ carry;
            carry = (v) /10;
            int r = (v) %10;
            ans->next = new ListNode(r);
            ans = ans->next;
        }
         while(l2){ 
            int x = l2->val;
             l2 = l2->next;
            int v = x+ carry;
            carry = (v) /10;
            int r = (v) %10;
            ans->next = new ListNode(r);
            ans = ans->next;
        }
        while(carry){   
             ans->next = new ListNode(carry%10);
            carry = carry/10;
        }
        
        return head->next;
    }
    
};