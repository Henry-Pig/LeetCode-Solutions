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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1;
        stack<int>s2;
        stack<int>sans;
        int carry=0;
        ListNode* cur=l1;
        while(cur)
        {
            s1.push(cur->val);
            cur=cur->next;
        }
        cur=l2;
        while(cur)
        {
            s2.push(cur->val);
            cur=cur->next;
        }
        while(!s1.empty()||!s2.empty()||carry)
        {
            //cout<<1;
            int num1=0,num2=0;
            if(!s1.empty()){num1=s1.top();s1.pop();}
            if(!s2.empty()){num2=s2.top();s2.pop();}
            int temp=num1+num2+carry;
            carry=temp/10;
            sans.push(temp%10);
        }
        ListNode* dummy=new ListNode;
        cur=dummy;
        while(!sans.empty())
        {
            cur->next=new ListNode(sans.top());
            sans.pop();
            cur=cur->next;
        }
        return dummy->next;
    }
};