       //�|�~�P�_! 

#include <iostream>   
using namespace std;

int main()
{
    int year;
    
    cout<<"�п�J�褸�~"<<endl; 
    cin>>year;

    if ((year%4)==0&&(year%100)!=0||(year%400)==0)
        cout<<year<<"�O�|�~"<<endl;
    
    else     
        cout<<year<<"���O�|�~"<<endl;        
    
    system("pause");
    return 0;
}
