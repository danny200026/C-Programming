#include <iostream>
#include <iomanip>  //Αてㄧ计┮惠璶ノ夹繷郎 
using namespace std;

int main()
{
    /*  "<<setw(n)" = "cout.width(n)"
        "<<setfill('じ')" = "cout.fill('じ')"    
        "<<setprecision(n)" = "cout.precision(n)"  
        
        <<setprecision(n) -->Τ计砞﹚
        <<fixed<<setprecision(n) -->计翴Τ计砞﹚*/

    cout<<setfill('*');
    cout<<setw(14)<<left<<"Test"<<endl;   //砞﹚14,綼オ块 
        
    cout<<setprecision(6)<<12.67454584<<endl;  //砞﹚计场Τ计6 
    cout<<fixed<<setprecision(5)<<12.67454584<<endl;  //砞﹚计Τ计5 

    cout<<"10.482436"<<endl;
    system("pause");
    return 0;
}
