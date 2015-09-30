#include <iostream>
using namespace std;

class father
{
    protected:
        int x,y;
};

class son:protected father
{
    public:
        son()   
        {}
        son(int a,int b)
        {
            x=a;
            y=b;
        }
        int ans()
        {
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
            cout<<"x+y="<<x+y<<endl;
        }           
};

int main()
{
    son a; 
    son b(10,200);   
    b.ans();
    
    system("pause");
    return 0;
}
