#include <iostream>
using namespace std;

int main()
{
    /*  cout.precision(n);
        =>砞﹚计Τ计(俱计+计)
         ,C++讽い箇砞Τ计 
     
           1.ㄣΤ┑尿┦     
           2.砞﹚计n惠璶"单(>=)"计
           3.砞﹚计穦彼き 
           4.璝砞﹚计n计计,穦厩癘腹ボ(┪菠计)->跌薄猵τ﹚ 
      
      
        cout.setf(ios::fixed,ios::floatfield) -->タΑ糶猭 
        =>砞﹚计翴Τ计(斗㎝cout.precision(n)癬ノ)
          虏糶cout.setf(ios::fixed)
                
        cout.unsetf(ios::fixed)
        =>砞﹚计翴Τ计(斗㎝cout.precision(n)癬ノ)  */



    cout<<123.79385361<<endl;  //ゼ砞﹚玡 
    
    cout.precision(5);   //砞﹚Τ计5,穦彼き 
    cout<<123.7983<<endl;
    cout<<457.3945<<endl;
    
    cout.precision(1);  //Τ计ゑ计,┮穦厩才腹ボ(┪菠计) 
    cout<<145.233<<endl;
    
    
    
    cout.precision(4);
    cout.setf(ios::fixed,ios::floatfield);  //砞﹚计翴Τ计4 
    cout<<475.445237<<endl;
    
    cout.unsetf(ios::fixed);  //砞﹚计翴Τ计 
    cout<<123.79834<<endl;
    system("pause");
    return 0;
}
