int main()
{
    int a;
    
    printf("請輸入整數a=?\n");
    scanf("%d",&a);
   
    {                               //第8~第13行是一個小型區域(大括弧),所以變數"b"不能在外面使用!! 
         int b;
         printf("請輸入整數b=?\n");
         scanf("%d",&b);
         printf("a=%d,b=%d\n",a,b);
    }          
    
    printf("a=%d\n",a); 
    //printf("a=%d,b=%d\n",a,b);  //"b"是區域變數,不能在外面顯示!! 
    
    system("pause");
    return 0;
}
