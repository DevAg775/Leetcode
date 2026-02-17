// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
// };

class Solution {
public:
    int getLength(ListNode* &head){
        ListNode* temp = head;
        int count =0;
        while(temp!= NULL){
        count++;
        temp = temp->next;
        }
        return count;
    }

    ListNode* findmidnode(ListNode* &head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode*  reverseLL(ListNode* &head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!= NULL){
            ListNode* forward = curr->next;
            curr->next=prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
   
    bool isPalindrome(ListNode* head) {
        // your code goes here
        int len = getLength(head);
        ListNode* finalmidnode ;
        if(len & 1 ){
            finalmidnode = findmidnode(head) -> next;
        }
        else{
            finalmidnode = findmidnode(head);
        }
        ListNode* tempmidnode = reverseLL(finalmidnode);
        ListNode* temp = head;
        while(temp!=NULL && tempmidnode!=NULL){
            if(temp->val!= tempmidnode->val){
                return false;
            }
            else{
                temp=temp->next;
                tempmidnode=tempmidnode->next;
            }
        }
        return true;
    }
};
