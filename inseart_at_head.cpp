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

  cout << "Your Linked List: ";
  while (tmp != NULL)
  {

    cout << tmp->vlue << " ";
    tmp = tmp->next;
  }

  cout << endl;
}

void inseart_at_head(Node *&head, int v)
{
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;

  cout << "Inseart At Head" << endl;
}

void inseart_at_postion(Node *head, int pos, int v)
{

  Node *newNode = new Node(v);
  Node *temp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
  }

  newNode->next = temp->next;
  temp->next = newNode;

  cout << endl
       << "Inseart At postion:" << pos << endl
       << endl;
}

int main()
{
  Node *head = NULL;

  while (true)
  {
    /* code */
    cout << "Opation 1: Insert At Tail" << endl;
    cout << "Opation 2: Print Linked List" << endl;
    cout << "Opation 3: Insert At a Postion" << endl;
    cout << "Opation 4: Insert At head" << endl;
    cout << "Opation 5: terminate" << endl;
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
      int pos, value;
      cout << "Give a Postion:";
      cin >> pos;
      cout << "Give value:";
      cin >> value;
      if (pos == 0)
      {
        inseart_at_head(head, value);
      }
      else
      {
        inseart_at_postion(head, pos, value);
      }
    }
    else if (opstion == 4)
    {
      int value;

      cout << "Give value:";
      cin >> value;

      inseart_at_head(head, value);
    }
    else if (opstion == 5)
    {
      break;
    }
  }

  return 0;
}