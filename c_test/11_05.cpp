#include <iostream>
using namespace std;

int main()
{
    /*"cout.witdth(n)" -->糴(珹┓い俱计n) 
    1.  箇砞綼,ぃì干フ
    2.  度続ノ计 
    3.  nぃì,穦嫉秨 */
    
    cout.width(6);   //ノ计,┮计ぃ穦砆紇臫 
    cout<<123<<endl;
    
    
    cout<<471<<endl;
    
    
    cout.width(3);  //nぃì,┮陪ボ穦嫉秨 
    cout<<123456<<endl;
    
    
    int n;
    
    cout.width(10);
    n=cout.width();
    cout<<"じ糴:"<<n<<endl;
    
    
    system("pause");
    return 0;
}
