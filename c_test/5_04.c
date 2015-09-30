int main()
{
    int int1,int2;
    char char1;
    printf("請輸入兩個數字及+-*/%符號進行運算(字與字之間要加空白!!)\n"); 
    printf("例如:45 + 45\n"); 
    scanf("%d %c %d",&int1,&char1,&int2);
    
    
    switch(char1)
    {
        case '+':    //如果選項是字元,要在字元中間加單引號!!!    
            printf("%d+%d=%d\n",int1,int2,int1+int2);
            break;
        case '-':
            printf("%d-%d=%d\n",int1,int2,int1-int2);
            break;
        case '*':
            printf("%d*%d=%d\n",int1,int2,int1*int2);
            break;
        case '/':
            printf("%d/%d=%f\n",int1,int2,(float)int1/int2);
            break;
        case '%':
            printf("%d%%%d=%d\n",int1,int2,int1%int2);
            break;
            default:
                printf("輸入錯誤!!!\n");
    }                  
    system("pause");
    return 0;
}
