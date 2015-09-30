int main()
{
    char s[3];
    int A,a[5];
    
        printf("請輸入字串:\n"); 
        scanf("%s",s);    //在這裡,因為輸入的是字串,所以不需要加"&"!!! 
        
        
        printf("你輸入了%s\n",s);
        printf("其中第一個字元是:%c\n",s[0]);
        
    system("pause");
    
    for(A=0;A<4;A++)
    {
        printf("\n請輸入第%d個數字:",A+1);
        scanf("%d",&a[A]);
    }
    
    for(A=0;A<4;A++)
    {
        printf("你輸入的第%d個數字是:%d\n",A+1,a[A]);
    }   
    system("pause");
    return 0;
}
