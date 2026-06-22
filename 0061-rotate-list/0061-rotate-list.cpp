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
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==NULL)return head;
        ListNode* temp=head;
        int n=0;
        ListNode* curr=NULL;
        while(temp!=NULL){
            if(temp->next==NULL)curr=temp;
            temp=temp->next;
            n++;
        }
        k=k%n;
        curr->next=head;
        int m=n-k;
        temp=head;
        while(m>0){
            if(m==1){
                curr=temp;
            }
           temp=temp->next;
           m=m-1;
           
        }
        ListNode* newhead=temp;
        curr->next=NULL;

        return newhead;
    }
};