int main()
{
    int a=0,s[5];
    
    
    for(a=0;a<=4;a++)
    {
        printf("請輸入第%d個數字:",a+1);
        scanf("%d",&s[a]);
    }    
    
        printf("\n********結果********\n");
         
    for(a=0;a<=4;a++)
    {
        printf("s[%d]=%d\n",a,s[a]);
    }
    system("pause");
    return 0;
}
