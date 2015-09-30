/*
enum myweek
{
     Mon,Tue,Wed,Thr,Fri,Sat,Sun;
}物件名稱(可輸入在這裡);
*/

#include <iostream>
using namespace std;

enum myweek
{
     Mon,Tue,Wed,Thr,Fri,Sat,Sun
}a1;
int main()
{
    enum myweek Week;
    a1=Tue;
    
    if(a1==1)
        cout<<"正確"<<endl;
    else
        cout<<"不對"<<endl;
    
    cout<<"Mon="<<Mon<<endl;
    cout<<"Tue="<<Tue<<endl;
    cout<<"Wed="<<Wed<<endl;         
    cout<<"Thr="<<Thr<<endl;
    cout<<"Fri="<<Fri<<endl;
    cout<<"Sat="<<Sat<<endl;
    cout<<"Sun="<<Sun<<endl;

    cout<<"sizeof(Mon)="<<sizeof(Mon)<<endl<<"sizeof(Tue)="<<sizeof(Tue)<<endl;


    system("pause");
    return 0;
}
