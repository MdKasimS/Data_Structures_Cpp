#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
    int b,toss,a[15];
    public:
    stack(){toss=0;}
    void create(int x);
    void del();
    void display();

};
void stack::create(int x)
{

    if(toss==0)
    {
        cout<<"Stack is Empty\nEnter Element\n";
        cin>>a[toss];
        toss++;
    }
    else
    {
        cout<<"Enter the Element\n";
        cin>>a[toss];
        toss++;
    }
}

void stack::display()
{
    cout<<"Displaying Stack Elements\n";
    for(b=toss;b>=0;b--
    )
    {
        cout<<a[b]<<"\t";
    }
}

void stack::del()
{
    toss--;
}

int main()
{
    int i,j,k;
    //j=0;
    stack s1;
    cout<<"welcome To Stack Learning Progrmme\n";
    do
    {
     cout<<"enter Your Choice\n1.Insert Element\t2.Display Stack\t3.Del Element\t4.Exit\n";
     cin>>i;
     switch(i)
     {
     case 1:
        s1.create(k);
         break;
     case 2:
        s1.display();
        break;
     case 3:
        s1.del();
        break;
     case 4:
        break;
     }
    /* cout<<"to continue press 1\t";
     cin>>j;*/
    }
    while(i!=4);
    cout<<"we are done here\n";
    return 0;
}
