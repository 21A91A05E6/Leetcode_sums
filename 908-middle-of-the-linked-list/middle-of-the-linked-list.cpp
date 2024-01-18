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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        temp=head;
        int m=(c/2)+1;
        while(temp!=NULL){
            m-=1;
            if(m==0){
                break;
            }
            temp=temp->next;
        }
        return temp;
    }
};