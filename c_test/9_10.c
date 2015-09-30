void func1()
{
    static int a=1;
    static char b=1; //"static int a=1","static"種繰篈,讽办跑计
    printf("a=%d  b=%c\n",a,b);
    a++;            //猔種!!"stasic"跑计瘤礛摸办跑计,琌ぃ琌办跑计!!!!! 
    b++;
}



int main()
{
    int k;
    
    
    for(k=1;k<=5;k++)
        func1();
            
    
    system("pause");
    return 0;
}
