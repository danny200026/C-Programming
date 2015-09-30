int i=2000;

void main()
{   
    void data(); 
    int i=50;   //可改成註解或不註解測試
    
    printf("i=%d\n",i);    
    data(i);
    printf("i=%d\n",i);
    
    system("pause");
  
}


void data(int i)    //可改成變數i或w測試    
{
    printf("i=%d\n",i);  
    i++;
    printf("i=%d\n",i);
}    
