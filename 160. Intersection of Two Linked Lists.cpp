//160. Intersection of Two Linked Lists

//Given the heads of two singly linked-lists headA and headB, return the node at which the 
//two lists intersect. If the two linked lists have no intersection at all, return null.
//Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
//Output: Intersected at '8'

int length(ListNode *headA){
        int b=0;
        ListNode* temp1=headA;
        while(temp1){
         b++;
        temp1=temp1->next;
        }
        return b;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int b=length(headA);
        int c=length(headB);
        int d;
        ListNode* temp2;
        ListNode* temp1;
        if(c>b)
            temp1=headB,temp2=headA,d=c-b;
        else
            temp2=headB,temp1=headA,d=b-c;
        while(d){
            if(temp1==NULL)
                return NULL;
            temp1=temp1->next;
             d--;
        }
        while(temp1 and temp2){
            if(temp1==temp2)
                return temp1;
        temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
