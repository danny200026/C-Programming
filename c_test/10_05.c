int main()
{               //�n�`�N�����ܼƪ��Ϊk! 
    int a;
    a=20;
    
    int b=40;
    
    int sum1=50,*ptri;
    
    ptri=&sum1;
    
    int sum2=60,*ptrj=&sum2;
    
    printf("%d,%p,%p,%d\n",*ptri,ptri,&ptri,sizeof(ptri));
    printf("%d,%p,%p,%d\n",*ptrj,ptrj,&ptrj,sizeof(ptrj));
    system("pause");
    return 0;
}
