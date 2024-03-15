#include<iostream>
using namespace std;

int a[10];
int top=-1;

    void InsertEnd(int value)
    {
        if(top>20)
        {
            cout << "Top is full";
        }
        else
        {
            top++;
            a[top]=value;
        }
    }
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout << "a[" << i << "] :-> " << a[i] << endl;
        }
        if(top<0)
        {
            cout << "Empty\n";
        }
    }

    void deleteEnd()
    { 
        if(top<0)
        {
            cout << "Empty\n";
        }
        else
        {
            top--;
            cout << "Delete Successfuly\n";    
        }
    }

int main()
{
    int n;
    do
    {
        int number=0;
        cout << "1. Insert" << endl;
        cout << "2. Dispaly" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter the number :-> ";
            cin >> number;
            InsertEnd(number);
            break;

        case 2:
            display();
            break;

        case 3:
            deleteEnd();
            break;
            
        
        default:
            break;
        }
    } while (n!=4);
    
}