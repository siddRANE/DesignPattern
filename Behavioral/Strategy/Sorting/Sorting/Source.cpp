//#include"DataSorter.h"
//#include <vector>
//#include "SelectionSort.hxx"
//#include "BubbleSort.hxx"
//#include <iostream>
//
////Strategy pattern
//// Context delegates the sorting to family of algorithms of sorting
//// So that new strategies can be added/ existing can be modified without impacting other strategies
//// Strategy can be set interchangably
//
//
//int main()
//{
//	using namespace std;
//	vector<int> v{ 3,2,19,0 };
//	SelectionSort ssort;
//	BubbleSort bsort;
//	DataSorter dst(v);
//
//	dst.setStrategy(&ssort);
//	dst.setStrategy(&bsort);
//	dst.sort();
//
//	cout << "===================" << endl;
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		cout << " " <<  v[i] << " " << "\t";
//	}
//	cout << endl;
//	return 0;
//
//}


// { Driver Code Starts
#include<iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node* next, *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = nullptr;
    }
};

void print(Node * head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void printRandom(Node* head)
{
    while (head)
    {
        cout << head->random->data << " ";
        head = head->next;
    }
}

Node* deepcopy(Node* ptr)
{
    unordered_map<Node*, Node*> mp;
    Node* newhead = nullptr;
    Node* head = ptr;
    while (head)
    {
        Node* p = new Node(head->data);
        if (newhead == nullptr)
        {
            newhead = p;
        }
        mp[head] = p;
        head = head->next;
    }
    head = ptr;
    while (head)
    {
        Node* f = mp.at(head);
        if(head->next)
        f->next = mp.at(head->next);
        if(head->random)
        f->random = mp.at(head->random);
        head = head->next;
    }
    return newhead;

}
// } Driver Code Ends
int main()
{
    Node* p1 = new Node(1);
    Node* p2 = new Node(2);
    p1->next = p2;
    Node* p3 = new Node(3);
    p2->next = p3;
    Node* p4 = new Node(4);
    p3->next = p4;
    Node* p5 = new Node(5);
    p4->next = p5;

    p1->random = p3;
    p2->random = p1;
    p3->random = p5;
    p4->random = p3;
    p5->random = p2;

    print(p1);
    cout << endl;
    printRandom(p1);
    cout << endl;
    Node* newh = deepcopy(p1);
    print(newh);
    cout << endl;
    printRandom(newh);

    return 0;
}