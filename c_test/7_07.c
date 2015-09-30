int main()
{
    int a,b;
    void func();
    
    scanf("%d %d",&a,&b);
    puts("在主程式內");    //"puts"功能和"printf"相當,專門放置字串,會自動換行!!! 
    printf("a=%d,a在記憶體中的位址=%p\n",a,&a);
    printf("b=%d,b在記憶體中的位址=%p\n",b,&b);
                    //"%p"會顯示變數在記憶體中的位址(以16進位碼顯示),在格式區要顯示的變數前要加"&"!! 
    func(a,b);  
    
    system("pause");
    return 0;
}


void func(a,b)
{
    puts("在函式func()內");
    printf("a=%d,a在記憶體中的位址=%p\n",a,&a);
    printf("b=%d,b在記憶體中的位址=%p\n",b,&b);
}     
