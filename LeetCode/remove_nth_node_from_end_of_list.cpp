// C++
// Problem Statement: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = head, *doublePtr = head;
        int counter = 1, totalItems = 0;
        
        while(true) {
            if(!doublePtr->next) {
                totalItems = counter * 2 - 1;
                break;
            } else if(!doublePtr->next->next) {
                totalItems = counter * 2;
                break;
            }
            
            ptr = ptr->next;
            doublePtr = doublePtr->next->next;
            counter++;
        }
        
        // Move pointer to required item
        int nthItem = totalItems - n + 1;
        
        if(nthItem == 1) {
            return head->next;
        }
        
        int start = counter + 1, end = nthItem;
        if (nthItem <= counter) {
            ptr = head;
            start = 1;
            end = nthItem - 1;
        }
        for(int i = start; i < end; i++) {
            ptr = ptr->next;
        }
        
        // Remove item
        ptr->next = ptr->next->next;
        
        return head;
    }
};
