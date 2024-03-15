#include <iostream>
using namespace std;
int a[10];
int f = -1;
int r = -1;
int size = 10;
void insert(int number)
{
    if (r >= size - 1)
    {
        cout << "queue is full";
    }
    else if (f == -1 && r == -1)
    {
        f++;
        r++;
        a[r] = number;
    }
    else
    {
        r++;
        a[r] = number;
    }
}
void display()
{
    if (f < 0)
    {
        cout <<endl<< "queue is empty";
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            cout << "a[" << i << "]" << a[i] << endl;
        }
    }
}
void Delete()
{
    if(r < 0)
    {
        cout<<endl<<"queue is empty";
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        f++;
    }
}
int main()
{
    int n;
    do
    {
        int number = 0;
        cout <<endl<< "1. Insert" << endl;
        cout << "2. Dispaly" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter the number :-> ";
            cin >> number;
            insert(number);
            break;

        case 2:
            display();
            break;

        case 3:
            Delete();
            break;

        default:
            break;
        }
    } while (n != 4);
}