#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int vlue;
  Node *next;

  Node(int val)
  {
    this->vlue = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, int v)
{

  Node *newNode = new Node(v);

  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *tmp = head;
  // insarting Node at Tail
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }

  tmp->next = newNode;
}

void print_linked_list(Node *head)
{
  Node *tmp = head;

  while (tmp != NULL)
  {
    cout << tmp->vlue << " ";
    tmp = tmp->next;
  }

  cout << endl;
}

int main()
{
  Node *head = NULL;

  while (true)
  {
    /* code */
    cout << "Opation 1: Insert At Tail" << endl;
    cout << "Opation 2: Print Linked List" << endl;
    cout << "Opation 3: terminate" << endl;
    int opstion;
    cin >> opstion;

    if (opstion == 1)
    {
      cout << "Plse Entar Your Value:";
      int v;

      cin >> v;

      insert_at_tail(head, v);
    }
    else if (opstion == 2)
    {
      print_linked_list(head);
    }
    else if (opstion == 3)
    {
      break;
    }
  }

  return 0;
}