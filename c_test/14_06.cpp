#include <iostream>
using namespace std;

class father
{
    public:
        int x,y;
};

class son:public father
{
    public:
        int ans()
        {
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
        }
};

int main()
{
    son a;
    a.x=10;
    a.y=15;
    a.ans();
    
    system("pause");
    return 0;
}
