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
        struct ListNode *temp = headA;
        int lengtha=0;
        while(temp!=NULL)
        {
            lengtha++;
            temp=temp->next;
        }
        temp = headB;
        int lengthb =0;
        while(temp!=NULL)
        {
            lengthb++;
            temp=temp->next;
        }
        if(lengtha>lengthb)
        {
            int count = lengtha-lengthb;
            temp=headA;
            while(count--)
            {
                temp=temp->next;
            }
            struct ListNode *ptr = headB;
            while(ptr!=NULL && temp!=NULL)
            {
                if(ptr->val==temp->val)
                {
                    return temp;
                }
                ptr=ptr->next;
                temp=temp->next;
                
            }
        }
        else 
        {
            int count = lengthb-lengtha;
            temp=headB;
            while(count--)
            {
                temp=temp->next;
            }
            struct ListNode *ptr = headA;
            while(ptr!=NULL && temp!=NULL)
            {
                if(ptr->val==temp->val)
                {
                    return temp;
                }
                ptr=ptr->next;
                temp=temp->next;
                
            }
        }
        return NULL;
        
    }
};