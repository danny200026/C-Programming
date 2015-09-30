int main()
{
    int a,b;
    //第一種方式 
    printf("請輸入第一個數字:"); 
    scanf("%d",&a);
    printf("你輸入的第一個數字是:%d\n",a); 
    printf("請輸入第二個數字:");
    scanf("%d",&b);
    printf("你輸入的第二個數字是:%d\n",b);
    printf("將你輸入的數字加總後為:%d\n",a+b); 
    system("pause");
    
    
    
    
    //第二種方式
    printf("請輸入任兩個數字\n"); 
    printf("1.可以在輸入第一個數字後按Enter,並繼續輸入第二個數字\n");
    printf("2.也可以在第一個數字後空一格,繼續輸入第二個數字\n");
    scanf("%d%d",&a,&b);
    printf("輸入的兩個數字加總後為:%d\n",a+b);
    system("pause");
    return 0; 
}

