#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

class Queue {

    stack<int> stack1;
    stack<int>temp;


   public: void push(int x)
    {


           stack1.push(x);

    }// End of push fun()....

     void pop()
    {
        if(stack1.empty()&&temp.empty())
        {
            cout<<"Your Queue Is Already Empty...!";
        }
        else
        {
            if(!temp.empty())
            {
                cout<<"Your Exiting Element is : "<<temp.top()<<endl;
                temp.pop();
            }
            else
            {
                while (!stack1.empty())
              {
                temp.push(stack1.top());
                stack1.pop();
               }

            cout<<"Your Exiting Element is : "<<temp.top()<<endl;
                temp.pop();
            }
        }
    }//End of pop Fun()...

     void peek()
    {
        if(!temp.empty())
        {
          cout<<"Your Front Element Is : "<<temp.top()<<endl;

        }
        else
        {
            while (!stack1.empty())
              {
                temp.push(stack1.top());
                stack1.pop();
               }
            cout<<"Your Front Element Is : "<<temp.top()<<endl;
        }
    }//End Of peek fun()...


};

int main()
{
    Queue queue1;
    int case1;

    while(1)
 {
     cout<<"Enter \n1 : For Adding New Element To The Queue .\n2 : For Exiting The Element From The Queue .\n3 : For Peeking The Element Of The Queue .\n4 : For Exit .\n";
     cin>>case1;
    switch(case1)
    {
    case 1: int x;
            cout<<"Enter the Element You Want To Add In the Queue  :";
            cin>>x;
           queue1.push(x);break;
    case 2:
            queue1.pop();break;
    case 3: queue1.peek();break;

    case 4: exit(0);

    default: cout<<"Enter Valid Choice...!\n";

    }
 }
 return 0;

} //End of main fun()...
