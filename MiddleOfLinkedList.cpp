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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head , *fast=head;
      
        while(slow&&fast->next){
             slow = slow->next;
            if(fast->next && fast->next->next)
             fast = fast->next->next;
            else 
             break;
        }
        return slow;
    }
};