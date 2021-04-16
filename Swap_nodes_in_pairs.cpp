
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy,*pre=dummy,*next=dummy;
        int len=0;
        while(curr->next!=NULL){
            len++;
            curr=curr->next;
        }
        while(len>=2){
            curr=pre->next;
            next=curr->next;
            for(int i=1;i<2;i++){
                curr->next=next->next;
                next->next=pre->next;
                pre->next=next;
                next=curr->next;
            }
            pre=curr;
            len-=2;
        }
        return dummy->next;
    }
};
// Generic solution for "Reverse a linked list in groups of given size K" with K = 2


if only swap data then
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode*temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            swap(temp->val,temp->next->val);
           temp=temp->next->next;
        }
        return head;
    }
};
