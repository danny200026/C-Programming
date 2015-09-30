int a=50;    //办跑计,祘Αいヴ︽!! 


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
    extern int a;   //更办跑计"a",菠,続ノ祘Α絏耕祘Αず 
    
    printf("In the main() a=%d\n",a);
    func1();
    func2();
    printf("In the main() a=%d\n",a);   
    
    system("pause");
    return 0;
}
