Node* removeDuplicates(Node *head)
{
  //Write your code here
  Node* current = head, *previous = head;
  current = current->next;
  while(current)
  {
      if(current->data == previous->data)
      {
          current=current->next;
          previous->next = current;
      }
      else
      {
          current=current->next;
          previous=previous->next;
      }
  }
  return head;
}
