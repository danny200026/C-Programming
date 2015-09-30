#include <iostream>
using namespace std;

class Cstatic
{
    public:
        int x;
        static int y;
        
        int getx()
        {
            x=10;
            x++;
            return x;
        }
        int gety()
        {
            y++;
            return y;
        }      
};

int Cstatic::y=50;

int main()
{
    Cstatic a,b,c;
    
    cout<<"a.getx()="<<a.getx()<<endl;
    cout<<"b.getx()="<<b.getx()<<endl;
    cout<<"c.getx()="<<c.getx()<<endl;
    
    cout<<"*********************"<<endl;
    
    cout<<"a.gety()="<<a.gety()<<endl;
    cout<<"b.gety()="<<b.gety()<<endl;
    cout<<"c.gety()="<<c.gety()<<endl;
    
    system("pause");
    return 0;
}
