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
    bool hasCycle(ListNode *head) {
        // ListNode *s=head;
        // ListNode *f=head;
        // while(f!=NULL && f->next!=NULL){
        //     s=s->next;
        //     f=f->next->next;
        //     if(s==f){
        //         return true;
        //     }
        // }
        // return false;

        map<ListNode*,int>m;
        ListNode *temp=head;
        while(temp!=NULL){
            if(m.find(temp)!= m.end()){
                return true;
            }
            m[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};