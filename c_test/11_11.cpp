#include <iostream>
#include <iomanip>  //�榡�ƨ�Ʃһݭn�Ψ쪺���Y�� 
using namespace std;

int main()
{
    /*  "<<setw(n)" = "cout.width(n)"
        "<<setfill('�r��')" = "cout.fill('�r��')"    
        "<<setprecision(n)" = "cout.precision(n)"  
        
        <<setprecision(n) -->�����Ħ�Ƴ]�w
        <<fixed<<setprecision(n) -->�p���I�ᦳ�Ħ�Ƴ]�w*/

    cout<<setfill('*');
    cout<<setw(14)<<left<<"Test"<<endl;   //�]�w��14��,�a����X 
        
    cout<<setprecision(6)<<12.67454584<<endl;  //�]�w�ƭȥ������Ħ�Ƭ�6�� 
    cout<<fixed<<setprecision(5)<<12.67454584<<endl;  //�]�w�p�ƫᦳ�Ħ�Ƭ�5�� 

    cout<<"10.482436"<<endl;
    system("pause");
    return 0;
}
