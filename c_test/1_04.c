int main()           
{
    float a=3.14;                 //英文字母有分大小寫!!! 
    int A=369;
    printf("%d  %f  %d\t",A,a,A);    //"\t"在此相當於Tab鍵(即空四格) 
    printf("%d",A);
    system("pause");
     
//討論格式錯誤 
    a=1.323;    //在這裡的a已經將上面宣告的a值覆蓋 
    A=232;      //在這裡的a已經將上面宣告的A值覆蓋
    printf("%d\n",a);    //這裡的a應該顯示為浮點值(%f),但是這裡的格式錯誤,所以會出現亂數 
    printf("%f\n",A);    //這裡的A應該顯示為整數值(%d),但是這裡的格式錯誤,所以會出現亂數
    system("pause");
    
//討論給太大給大小
    float b=123;
    int B=16.436952;
    printf("%f\n",b);    //這裡的b值後面會多出好幾個零 
    printf("%d\n",B);    //這裡的B值小數點後面會去掉 
    system("pause");
  
//討論不給初值
    float c;
    int C;
    printf("%f\n",c);    //在此,因為"c"值未宣告數字,因此會在記憶體中取任意值 
    printf("%d\n",C);    //在此,因為"C"值未宣告數字,因此會在記憶體中取任意值
    system("pause");
    return 0;
}
