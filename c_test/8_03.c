int i=2000;

void main()
{   
    void data(); 
    int i=50;   //�i�令���ѩΤ����Ѵ���
    
    printf("i=%d\n",i);    
    data(i);
    printf("i=%d\n",i);
    
    system("pause");
  
}


void data(int i)    //�i�令�ܼ�i��w����    
{
    printf("i=%d\n",i);  
    i++;
    printf("i=%d\n",i);
}    
