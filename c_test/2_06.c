int main()
{
    //字元是否可做加減乘除的計算 
    char ch1='a',ch2='A';       
    printf("%d\n",ch1+ch2);
    printf("%d\n",ch1-ch2);        //可以,出現的結果用ASCII碼顯現,即97-65=32
    printf("%d\n",ch1*ch2);
    printf("%d\n",ch1/ch2); 
    system("pause");
    return 0;
}
