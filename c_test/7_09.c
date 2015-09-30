int main()
{
    int a,b,g[4];
    void func();
    
    scanf("%d %d %d %d",&g[0],&g[1],&g[2],&g[3]);
    
    puts("在主程式中"); 
    
    for(a=0;a<4;a++)
    {
        printf("\ng[%d]=%d,在記憶體中的位置=%p\n",a,g[a],&g[a]);
    } 
    
    
    func(g);    //在這裡"func()"的括號內的"g[]"不要加"[]"!!!! 
    
    
    system("pause");
    return 0;
}



void func(int e[])
{
    int B,tmp;

    tmp=e[0];
    e[0]=e[3];
    e[3]=tmp;

    puts("\n在函式中"); 

    for(B=0;B<4;B++)
    {
        printf("\ne[%d]=%d,在記憶體中的位置=%p\n",B,e[B],&e[B]);
    } 
}
