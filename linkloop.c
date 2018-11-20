typedef struct node{  
    char data ;  
    node * next ;  
}Node;  
bool exitLoop(Node *head)  
{  
    Node *fast, *slow ;  
    slow = fast = head ;  
  
    while (slow != NULL && fast -> next != NULL)  
    {  
        slow = slow -> next ;  
        fast = fast -> next -> next ;  
        if (slow == fast)  
            return true ;  
    }  
    return false ;  
}  
