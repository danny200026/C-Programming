int a,result;

int ans(int s)
{    
    printf("%d\n",s*--s);   //這裡的"s*--s"因為"--s"是前置式所以會先算"--s",而最後算式會變成"(s-1)*(s-1)" 
    return s;   //回傳"s"值                  
}

int main()
{
    
    printf("請輸入一個整數");
    scanf("%d",&a);
    
    printf("%d",ans(a));  //注意!!!這裡會顯示"ans(a)"執行後的結果 
    
    system("pause");
    return 0;
}
