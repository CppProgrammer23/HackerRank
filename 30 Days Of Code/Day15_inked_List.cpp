Node* insert(Node *head,int data)
{
    //Complete this method
  if(head == nullptr)
      return new Node(data);
 
  Node* current = head;
  while(current->next)
      current = current->next;
  current->next = new Node(data);   
  return head;
}
