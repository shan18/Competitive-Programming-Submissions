/* Problem statement: https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1/?track=SP-Linked%20List
*/

void display(struct Node *head)
{
   struct Node *t;
   t = (struct Node *) malloc(sizeof(struct Node));
   t = head;
   while(t != NULL) {
       printf("%d ", t->data);
       t = t->next;
   }
}
