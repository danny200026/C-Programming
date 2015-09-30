#include <iostream>
using namespace std;

struct aaa
{
       int n1;
       float n2;
};

int main()
{
    int i;
    struct aaa a1[3]; //宣告"結構化的陣列"
    
    a1[0].n1=19;
    a1[0].n2=4.1358;
    a1[1].n1=13;
    a1[1].n2=5.12;
    a1[2].n1=15;
    a1[2].n2=4.569;
       
    for(i=0;i<3;i++)  
    {
         cout<<"a1["<<i<<"].n1="<<a1[i].n1<<endl;
         cout<<"a1["<<i<<"].n2="<<a1[i].n2<<endl;
    }


    system("pause");
    return 0;
}
