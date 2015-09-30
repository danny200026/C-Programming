       //閏年判斷! 

#include <iostream>   
using namespace std;

int main()
{
    int year;
    
    cout<<"請輸入西元年"<<endl; 
    cin>>year;

    if ((year%4)==0&&(year%100)!=0||(year%400)==0)
        cout<<year<<"是閏年"<<endl;
    
    else     
        cout<<year<<"不是閏年"<<endl;        
    
    system("pause");
    return 0;
}
