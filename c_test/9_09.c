int a=50;    //���������ܼ�,�i��b�{��������@��!! 


void func1()
{
    int a=10;
    printf("Tn the func1() a=%d\n",a);
}
void func2()
{
    int a=20;
    printf("In the func2() a=%d\n",a);
}

int main()
{
    extern int a;   //���J�����ܼ�"a",�i�ٲ�,�A�X�Φb�{���X���h���{���� 
    
    printf("In the main() a=%d\n",a);
    func1();
    func2();
    printf("In the main() a=%d\n",a);   
    
    system("pause");
    return 0;
}
