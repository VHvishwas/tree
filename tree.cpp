#include<iostream>
using namespace std;

typedef struct node
{
   struct node*left,*right;
   char item;
}node;


void inorder(node*root)
{

if(root)
{
inorder(root->left);
cout<<root->item;
inorder(root->right);
}

}
void double_order(node*root)
{
if(root)
{

cout<<root->item;
double_order(root->left);
cout<<root->item;
double_order(root->right);

}

}
void random(node*);
void indirect(node*root)
{

if(root)
{

random(root->left);
cout<<root->item;
random(root->right);

}


}





void random(node*root)
{
if(root)
{
  inorder(root->right);
  random(root->left);
  cout<<root->item;
}

}
/*
sample example

                 a
          b           c
    d         e       f     g

*/




int main()
{
    node*root=(node*)malloc(sizeof(node));
    root->left=0;
    root->right=0;
    root->item='a';

    node*root1=(node*)malloc(sizeof(node));
    root1->left=0;
    root1->right=0;
    root1->item='b';

    node*root2=(node*)malloc(sizeof(node));
    root2->left=0;
    root2->right=0;
    root2->item='c';


        node*root3=(node*)malloc(sizeof(node));
        root3->left=0;
        root3->right=0;
        root3->item='d';


            node*root4=(node*)malloc(sizeof(node));
            root4->left=0;
            root4->right=0;
            root4->item='e';




                node*root5=(node*)malloc(sizeof(node));
                root5->left=0;
                root5->right=0;
                root5->item='f';




                    node*root6=(node*)malloc(sizeof(node));
                    root6->left=0;
                    root6->right=0;
                    root6->item='g';




     root->left=root1;
     root->right=root2;
     root1->left=root3;
     root1->right=root4;
     root2->left=root5;
     root2->right=root6;



cout<<endl;

cout<<"inorder traversal"<<endl;
inorder(root);
cout<<endl;
cout<<"double order traversal"<<endl;
double_order(root);
cout<<endl;
cout<<"now answer of random order calling"<<endl;
random(root);
cout<<endl;
cout<<"now answer of indirect traversal"<<endl;
indirect(root);
     return 0;
}
