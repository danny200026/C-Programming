#include <iostream>          //新式標頭檔的輸入方式(第1行和第2行) 
using namespace std;

int main()
{
    float i;
    cout<<"請輸入一個整數"<<endl;   //  endl="\n"='\n' -> 換行 
    cin>>i;
    cout<<"你剛剛輸入的整數為:"<<(int)i<<"\n\n";  //(int)i 強制轉換i的型別為整數 
    
    float f;
    cout<<"請輸入一個浮點數"<<'\n';
    cin>>f;
    cout<<"你剛剛輸入的浮點數為:"<<f<<endl;
    
    system("pause");
    return 0;
}
                                 
