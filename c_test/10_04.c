int main()
{
    int a=15,*ptri;     //*�ϥΦb���ФW�ɡA�٤����u���ȹB��l�v�A���i�H���X���Щ��x�s���O�����m����!
    double b=20,*ptrj;
    char ch1='K',*ptrk;
    
    ptri=&a;
    ptrj=&b;
    ptrk=&ch1;
    
    printf("%d,%p\n",a,&a);
    printf("%f,%p\n",b,&b);
    printf("%c,%p\n",ch1,&ch1);
    
    printf("%d,%p,%p,%d\n",*ptri,ptri,&ptri,sizeof(ptri));     //�`�N!�]�������ܼƪ��\��u���ƻs������},�ҥH�û��u�e4��byte! 
    printf("%f,%p,%p,%d\n",*ptrj,ptrj,&ptrj,sizeof(ptrj));
    printf("%d,%p,%p,%d\n",*ptrk,ptrk,&ptrk,sizeof(ptrk));
    
    system("pause");
    return 0;
}
