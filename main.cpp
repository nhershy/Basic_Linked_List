#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int size = 0, val = 0;
    node *h = NULL, *n, *t;

    cout << "how many items in your list?";
    cin >> size;

    for (int i=0;i<size;i++)
    {
        cout << "enter data in node " << i+1 << ": ";
        cin >> val;
        n = new node;
        if (!h) //h==null
            h = n;
        else
            t->next = n;
        n->data = val;
        t = n;
        if (i == (size - 1))
            n->next = NULL;
    }
    for (node *i=h;i!=NULL;i=i->next)
    {
        cout << i->data << " ";
    }
    cout << endl;

    return 0;
}

