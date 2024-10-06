#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
class linkedlist
{
    struct node *head;
    public:
    struct node *createnode()
    {
        struct node *mynode=new struct node;
        if(mynode==NULL)
        {
            cout<<"\n underflow";
        }
        return mynode;
    }
    void insertionatend()
    {
        int info;
        struct node *newnode=createnode();
        cout<<"Enter the info :";
        cin>>info;
        newnode->info=info;
        if(head==NULL)
        {
            head=newnode;
            newnode->next=NULL;
            cout<<"\n first node added";
        }
        else
        {
            struct node *temp;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
            cout<<"\n ---node inserted at end successfully--- \n";
        }
    }
    void traversing()
    {
        if(head==NULL)
        {
            cout<<"\n underflow";
            return;
        }
        cout<<"\n ---linkedlist--- \n";
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->info<<"->";
            temp=temp->next;
        }
    }
    int middle()
    {
        int count=0;
        struct node *temp1;
        temp1=head;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            count++;
        }
        int middle_pos=count/2;
        int i;
        for(i=0;i<=middle_pos;i++)
        {
            temp1=temp1->next;
        }
        return temp1->info;
    }
};
int main()
{
    int ch;
    linkedlist l1;
    while(true)
    {
        cout<<"\n 1.insertionatend";
        cout<<"\n 2.traversing";
        cout<<"\n 3.exit";
        cout<<"\n 4.middle";
        cout<<"\n Enter the choice :";
        cin>>ch;
        if(ch==1)
        {
            l1.insertionatend();
        }
        else if(ch==2)
        {
            l1.traversing();
        }
        else if(ch==3)
        {
            cout<<"\n ---exit..--- \n";
            break;
        }
        else if(ch==4)
        {
            l1.middle();
        }
        else
        {
            cout<<"\n ---wrong choice--- \n";
        }
    }
}