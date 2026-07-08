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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return head;

        ListNode* oddHead = nullptr;
        ListNode* oddCurr = nullptr;
        ListNode* evenHead = nullptr;
        ListNode* evenCurr = nullptr;

        int idx = 1;
        ListNode* tmp = head;
        ListNode* tmp2 = nullptr;

        while (tmp) {
            tmp2 = tmp->next;
            tmp->next = nullptr;

            if (idx % 2 == 1) {
                if (oddHead == nullptr) {
                    oddHead = tmp;
                } else {
                    oddCurr->next = tmp;
                }

                oddCurr = tmp;
            } else {
                if (evenHead == nullptr) {
                    evenHead = tmp;
                } else {
                    evenCurr->next = tmp;
                }

                evenCurr = tmp;
            }

            idx++;
            tmp = tmp2;
        }

        oddCurr->next = evenHead;

        return oddHead;
    }
};
