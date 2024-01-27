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
    ListNode *detectCycle(ListNode *head) {
        // ListNode *s=head;
        // ListNode *f=head;
        // while(f!=NULL && f->next!=NULL){
        //     s=s->next;
        //     f=f->next->next;
        //     if(s==f){
        //         s=head;
        //         int c=0;
        //         while(s!=f){
        //             s=s->next;
        //             f=f->next;
        //             c++;
        //         }
        //         ListNode *n=new ListNode(c);
        //         return n;
        //     }
        // }
        // ListNode *nn=new ListNode(-1);
        // return nn;
        map<ListNode *,int>m;
        ListNode *temp=head;
        while(temp!=NULL){
            if(m.find(temp)!=m.end()){
                return temp;
            }
            m[temp]=1;
            temp=temp->next;
        }
        // ListNode *nn=new ListNode(-1);
        return NULL;
    }
};