int main()
{
    int a;
    
    printf("�п�J���a=?\n");
    scanf("%d",&a);
   
    {                               //��8~��13��O�@�Ӥp���ϰ�(�j�A��),�ҥH�ܼ�"b"����b�~���ϥ�!! 
         int b;
         printf("�п�J���b=?\n");
         scanf("%d",&b);
         printf("a=%d,b=%d\n",a,b);
    }          
    
    printf("a=%d\n",a); 
    //printf("a=%d,b=%d\n",a,b);  //"b"�O�ϰ��ܼ�,����b�~�����!! 
    
    system("pause");
    return 0;
}
