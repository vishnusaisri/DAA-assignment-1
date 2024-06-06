class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if list.size == 1 and position want to delete is 1 => NULL
        if(n == 1 && head->next==NULL) return NULL; 
        
        // find size of list
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp -> next;
        }
        
        // calculate position of node need to delete from head
        int nFromHead = count - n;

        // find the prev node of node want to delete
        temp = head;
        for(int i = 1 ; i < nFromHead ; i++)
        {
            temp = temp->next;
        }

        // nFromHead == 0 mean the first node need to delete
        // => head == head -> next

        // nFromHead != 0 => temp is prev node of node need to delete
        // => temp->next->next is the next node of node need to delete
        // => temp->next = temp->next->next
        (nFromHead != 0) ? temp->next = temp->next->next : head=head->next;  
        return head;
    }
};
