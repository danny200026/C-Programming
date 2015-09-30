//"union"(合併`聯合`共用) =>特點: "共用記憶體區塊" 
//"struct"(結構) =>特點: "各自獨立使用記憶體區塊" 
//注意!! "union"和"struct"都是不同資料型別的集合" 

#include <iostream>
using namespace std;

union data1
{
      int i;
      char c;
      float f;
      double d;
}u1;

struct data2
{
      int i;
      char c;
      float f;
      double d;
}d2;

int main()
{
      cout<<"sizeof(u1)="<<sizeof(u1)<<endl;    //取最大的宣告變數(double) 
      cout<<"sizeof(d2)="<<sizeof(d2)<<endl;    //加總所有宣告(包括物件) 

    system("pause");
    return 0;
}
