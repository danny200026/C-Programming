int main()
{
    int a,b,g[4];
    void func();
    
    scanf("%d %d %d %d",&g[0],&g[1],&g[2],&g[3]);
    
    puts("�b�D�{����"); 
    
    for(a=0;a<4;a++)
    {
        printf("\ng[%d]=%d,�b�O���餤����m=%p\n",a,g[a],&g[a]);
    } 
    
    
    func(g);    //�b�o��"func()"���A������"g[]"���n�["[]"!!!! 
    
    
    system("pause");
    return 0;
}



void func(int e[])
{
    int B,tmp;

    tmp=e[0];
    e[0]=e[3];
    e[3]=tmp;

    puts("\n�b�禡��"); 

    for(B=0;B<4;B++)
    {
        printf("\ne[%d]=%d,�b�O���餤����m=%p\n",B,e[B],&e[B]);
    } 
}
