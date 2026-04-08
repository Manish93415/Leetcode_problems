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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        map<ListNode*,int>count;
        while(tempA || tempB){
            if(tempA!=NULL){
                if(count[tempA]==1) return tempA;
                count[tempA]++;
                tempA=tempA->next;
            }

            if(tempB!=NULL){
                if(count[tempB]==1) return tempB;
                count[tempB]++;
                tempB=tempB->next;
            }
        }

        return NULL;

    }
};