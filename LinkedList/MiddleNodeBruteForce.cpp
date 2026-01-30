struct ListNode {
    int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       int cnt=0;
       ListNode* temp=head;
       while(temp!=NULL){
        temp=temp->next;
        cnt++;
       } 
       int Middle=0;
       ListNode* temp2=head;
       while(Middle!=cnt/2){
        temp2=temp2->next;
        Middle=Middle+1;

       }
       return temp2;
    }
};