int main()
{
    int a,b;
    void func();
    
    scanf("%d %d",&a,&b);
    puts("�b�D�{����");    //"puts"�\��M"printf"�۷�,�M����m�r��,�|�۰ʴ���!!! 
    printf("a=%d,a�b�O���餤����}=%p\n",a,&a);
    printf("b=%d,b�b�O���餤����}=%p\n",b,&b);
                    //"%p"�|����ܼƦb�O���餤����}(�H16�i��X���),�b�榡�ϭn��ܪ��ܼƫe�n�["&"!! 
    func(a,b);  
    
    system("pause");
    return 0;
}


void func(a,b)
{
    puts("�b�禡func()��");
    printf("a=%d,a�b�O���餤����}=%p\n",a,&a);
    printf("b=%d,b�b�O���餤����}=%p\n",b,&b);
}     
