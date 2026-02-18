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
    int getlength(ListNode* &head){
        auto temp = head;
        int count =0;
        while(temp){
            count++;
            temp=temp->next;
        }
        return count;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int N = getlength(head);

        int idealsize = N/k;
        int extranodes = N % k;

        vector<ListNode*> ans(k,NULL);
        auto temp = head;
        for(int i = 0; i < k&& temp != NULL ; i++){
            ans[i]=temp;
            int acutalcurrsize = idealsize + (extranodes-- > 0? 1 : 0 );
            for(int j =0 ; j< acutalcurrsize-1;j++ ){
                temp = temp->next;
            }
                auto nextpartstarting = temp->next;
                temp->next = NULL;
                temp = nextpartstarting;
            
        }
        return ans;
    }
};