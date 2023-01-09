#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *l;
    node *r;

    node(int d)
    {
        this->data = d;
        this->l = NULL;
        this->r = NULL;
    }
};

node *createTree(node *root)
{
    int data;
    cout << "data ? :";
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "left of " << data;
    root->l = createTree(root->l);
    cout << "right of " << data;
    root->r = createTree(root->r);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> tree;
    tree.push(root);
    while (!tree.empty())
    {
        node *temp = tree.front();
        cout << temp->data << " ";
        tree.pop();
        if (temp->l)
            tree.push(temp->l);
        if (temp->r)
            tree.push(temp->r);
    }
}

void preorderTraversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderTraversal(root->l);
    preorderTraversal(root->r);
}

int main()
{
    int x, n;
    node *root = NULL;
    root = createTree(root);
    levelOrderTraversal(root);
    preorderTraversal(root);
    return 0;
}