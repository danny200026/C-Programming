int main()
{
    int a=5,b=5,c=5;
    int d=25;
    int e=a+b;           
    printf("%d  %d\n",a,b+19);
    printf("%d\n",e);  //�Y�n���T�ӬۦP����,�n�H�r���j�}!! 
    system("pause");   //����g��"a=b=c=5",�]���bC\C++���y����,(�ݤU�����) 
    return 0;          //"���G=�B�⦡",�YC=a+b�h����,a+b=c�h������!! 
}
