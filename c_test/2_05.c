int main()
{
    /*型別轉換:在電腦的計算中,整數除以整數為整數,浮點數的計算出現的結果為浮點數                             
    所以有型別轉換的功能可以讓數字作型別上的轉換!!
    例如:
        int main()
{
    int x;
        printf("請輸入任意數字:\n"); 
        scanf("%d",&x);
        printf("你輸入的數字是:%f\n",(float)x);   
        system("pause"); 
        return 0;
}    
    ~~~~在第11行printf變數區內的變數x前面加上了(float),可將輸入的x值轉換為
    浮點數型式,即達到了型別的轉換~~~~
    */       
    float a,b;
    printf("請輸入一個整數:");
    scanf("%f",&a);
    printf("你輸入的整數是:%d\n",(int)a);   
    printf("請輸入一個浮點數:");
    scanf("%f",&b);
    printf("你輸入的浮點數是:%f\n",b); 
    system("pause");
    return 0;
}
