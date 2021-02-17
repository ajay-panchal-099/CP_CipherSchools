/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT :
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        this->head = NULL;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }

    void printList()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "\n";
    }

    int getSize()
    {
        Node *ptr = head;
        int size = 0;
        while (ptr != NULL)
        {
            size++;
            ptr = ptr->next;
        }
        return size;
    }

    void reverser_linked_list(){

        if (head == NULL || head->next == NULL)
            return;

        Node* curr= head, *prev = NULL;

        while(curr != NULL){
            Node* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        head = prev;

    }
   bool palindrome(Node** left, Node* right ){ 
        
        if(right == NULL) 
            return true;
        
        bool ispal  = palindrome(left, right->next);
        
        if(ispal == false)
            return false;
        
        bool isdata = (right->data == (*left)->data);
        
        *left = (*left)->next;
        
        return isdata;
        
    }
};


int32_t main()
{
    fast_io;
    // IO_Problem;

    SinglyLinkedList sll;
    sll.printList();
    for (int i = 1; i <= 5; i++)
    {
        sll.insertAtBeginning(i);
        //sll.printList();
    }

    for (int i = 1; i <= 5; i++)
    {
        sll.insertAtEnd(i);
    }
    sll.reverser_linked_list();
    sll.printList();
    
    if(sll.palindrome(&sll.head, sll.head)){
        cout<<" LL is Palindrome"<<endl;
    }
    else{
        cout<<" LL is not Palindrome"<<endl;
    }



    return 0;
}