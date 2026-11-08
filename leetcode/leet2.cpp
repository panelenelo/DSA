#include <bits/stdc++.h>
#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *i=l1, *j=l2;
        bool f = false;
        ListNode *w = nullptr;
        ListNode *l3 = nullptr;
        
        while(i != nullptr || j != nullptr){
            int val1=0, val2=0;
            if(i != nullptr){
                val1 = i->val;
                i = i->next;
            }else{
                val1 = 0;
            }

            if(j != nullptr){
                val2 = j->val;
                j = j->next;
            }else{
                val2 = 0;
            }

            int val = val1 + val2;
            if(f){
                val++;
                f=false;
            }
            if(val>=10){
                val = val%10;
                f = true;
            }

            ListNode *z = new ListNode(val);
            if(w == nullptr){
                w = z;
                l3 = z;
            }else{
                w->next = z;
                w = z;
            }
        }
        if(f){
            ListNode *z = new ListNode(1);
            w->next = z;
            w = z;
        }

        return l3;
    }

    void printList(ListNode* list){
        ListNode *i = list;
        while(true){
            cout << i->val << " ";
            i = i->next;
            if(i == nullptr){
                cout << endl << "End" << endl;
                break;
            }
        }
    }
};



int main(){

    Solution x;

    ListNode l1(4);
    ListNode l11(6, &l1);
    ListNode l12(5, &l11);

    ListNode l2(3);
    ListNode l21(4, &l2);
    ListNode l22(2,&l21);

    // x.printList(&l12);
    // cout << "---" << endl;
    // x.printList(&l22);
    // cout << "---" << endl;

    ListNode *y;
    y = x.addTwoNumbers(&l12, &l22);

    x.printList(y);

    // x.addTwoNumbers(l1, l2)

    return 0;
}
