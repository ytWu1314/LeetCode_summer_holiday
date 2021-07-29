class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * temp=new ListNode(-1); //附加头节点
        ListNode *cur=temp;
        int t=0;
        while(l1||l2||t)
        {
            if(l1) t+=l1->val,l1=l1->next;
            if(l2) t+=l2->val,l2=l2->next;
            cur->next=new ListNode(t%10);
            cur=cur->next; //插入节点之后 cur要往后走
            t/=10;
        }
        return temp->next;
    }
};
