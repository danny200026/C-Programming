int a=50;  //這裡宣告的是全域變數! 

void main()
{
    int a=13;   //這裡宣告的是區域變數!!因為"強龍不壓地頭蛇",所以下一行列印的值是這裡宣告的"a=13" 
    printf("a=%d\n",a);
    system("pause");
}
