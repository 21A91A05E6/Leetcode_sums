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
// class Solution {
// public:
//     ListNode *rev(ListNode *head,ListNode *n2){
//         ListNode *prev=NULL;
//         ListNode *temp=head;
//         ListNode *front;
//         while(temp!=NULL){
//             front=temp->next;
//             temp->next=prev;
//             prev=temp;
//             temp=front;
//         }
//         head=prev;
//         return head;
//     }
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode* temp=head;
//         ListNode *prev=NULL;
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         while(temp!=NULL){
//             prev->next=temp;
//             if(temp->val==left){
//                 prev->next=NULL;
//                 ListNode *n1=temp;
//             }
//             if(temp->val==right){
//                 ListNode *n2=temp;
//                 ListNode *a=temp->next;
//                 n2->next=NULL;
//             }
//             rev(n1,n2);
//             prev->next=n2;
//             n1->next=n1;
//             temp=temp->next;
//         }
//         return head;
//     }
// };

class Solution {
public:
ListNode* reverse(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *temp = head;

        while (temp != NULL) {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || head->next == NULL || left == right) {
            return head;
        }

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;

        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        ListNode *n1 = prev->next;
        ListNode *n2 = n1;

        for (int i = left; i < right; ++i) {
            n2 = n2->next;
        }

        ListNode *a = n2->next;
        n2->next = NULL;

        prev->next = reverse(n1);

        n1->next = a;

        return dummy->next;
    }

    
};
