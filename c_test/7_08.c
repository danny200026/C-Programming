int main()
{
    int a,b,x,g[4];
    void func();
    
    scanf("%d %d %d %d",&g[0],&g[1],&g[2],&g[3]);
    
    
    puts("在主程式中");
    for(x=0;x<4;x++)
    {
         printf("g[%d]=%d在記憶體中的位置=%p\n",x,g[x],&g[x]); 
    }
    
    func(g);   //在這裡會將g[]中的記憶體"位址"複製到"func()"中對應的e[],所以執行後,g[]和e[]記憶體位址相同!! 
            
    system("pause");
    return 0;
}
void func(int e[])     
{
    int G;
    puts("在函式中");
    
    for(G=0;G<4;G++)
    {
        printf("e[%d]=%d在記憶體中的位置=%p\n",G,e[G],&e[G]);
    }
}     
         
