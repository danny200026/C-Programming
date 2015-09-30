#include <iostream>
using namespace std;

enum human
{
    a1,a2,a3,a4,a5
}; 

int main()
{
    enum human a=static_cast<human>(2000);   //在C++使用時的特殊用法 
    
    printf("a=%d\n",a);
    
    printf("a1=%d\n",a1);
    printf("a2=%d\n",a2);
    printf("a3=%d\n",a3);
    printf("a4=%d\n",a4);
    printf("a5=%d\n",a5);
   
    system("pause");
    return 0;
}
