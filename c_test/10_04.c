int main()
{
    int a=15,*ptri;     //*使用在指標上時，稱之為「取值運算子」，它可以取出指標所儲存之記憶體位置的值!
    double b=20,*ptrj;
    char ch1='K',*ptrk;
    
    ptri=&a;
    ptrj=&b;
    ptrk=&ch1;
    
    printf("%d,%p\n",a,&a);
    printf("%f,%p\n",b,&b);
    printf("%c,%p\n",ch1,&ch1);
    
    printf("%d,%p,%p,%d\n",*ptri,ptri,&ptri,sizeof(ptri));     //注意!因為指標變數的功能只有複製對應位址,所以永遠只占4個byte! 
    printf("%f,%p,%p,%d\n",*ptrj,ptrj,&ptrj,sizeof(ptrj));
    printf("%d,%p,%p,%d\n",*ptrk,ptrk,&ptrk,sizeof(ptrk));
    
    system("pause");
    return 0;
}
