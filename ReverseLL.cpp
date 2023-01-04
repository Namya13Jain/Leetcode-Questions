//Reverse LL
ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *prev = NULL, *curr = head , *nex = head->next;
        while(curr!=NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = nex;
            if(nex) nex = nex->next;
        }
        return prev;
    }
