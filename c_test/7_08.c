int main()
{
    int a,b,x,g[4];
    void func();
    
    scanf("%d %d %d %d",&g[0],&g[1],&g[2],&g[3]);
    
    
    puts("�b�D�{����");
    for(x=0;x<4;x++)
    {
         printf("g[%d]=%d�b�O���餤����m=%p\n",x,g[x],&g[x]); 
    }
    
    func(g);   //�b�o�̷|�Ng[]�����O����"��}"�ƻs��"func()"��������e[],�ҥH�����,g[]�Me[]�O�����}�ۦP!! 
            
    system("pause");
    return 0;
}
void func(int e[])     
{
    int G;
    puts("�b�禡��");
    
    for(G=0;G<4;G++)
    {
        printf("e[%d]=%d�b�O���餤����m=%p\n",G,e[G],&e[G]);
    }
}     
         
