SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

     SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode * newnode = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedList));
     newnode->data=data;
     newnode->next=NULL;
     if(head==NULL)
     {
         head=newnode;
     }
     else 
     {
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newnode;
         
     }
     return head;
     
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
      	SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
        llist->head = llist_head;
    }

    print_singly_linked_list(llist->head, "\n", fout);
    fout << "\n";

    free_singly_linked_list(llist->head);

    fout.close();

    return 0;
}
