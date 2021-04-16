class Solution {
public:
    vector<int>tmp;
   
    Solution(ListNode* head) {
        while(head!=NULL){
            tmp.push_back(head->val);
            head=head->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int rand_index=rand()%tmp.size();
        return tmp[rand_index];
    }
};
//tc o(n)
//sc o(n)


class Solution {
public:
    int len=0;
    ListNode* list;
    Solution(ListNode* head) {
        ListNode* cur=head;
        list=head;
        while(cur!=NULL){
           len++;
            cur=cur->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int rand_index=rand()%len;
        ListNode* ptr=list;
        for(int i=0;i<rand_index;i++){
            ptr=ptr->next;
        }
        return ptr->val;
    }
};
//tc O(n)
//sc O(1)
