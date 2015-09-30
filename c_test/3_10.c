int main()
{
    int i=3,j=2;
    i+=j;       //這裡的i+=j相當於i=i+j!! 
    printf("i的結果為:%d\n",i);
    i=3,j=2;
    i=i+j;
    printf("i的結果為:%d\n",i);
    
    
    
    i=3,j=2;
    i-=j;       //這裡的i-=j相當於i=i-j!! 
    printf("i的結果為:%d\n",i);
    i=3,j=2;
    i=i-j;
    printf("i的結果為:%d\n",i);
    
    
    
    i=3,j=2;
    i*=j;       //這裡的i*=j相當於i=i*j!! 
    printf("i的結果為:%d\n",i);
    i=3,j=2;
    i=i*j;
    printf("i的結果為:%d\n",i);
    
    
    
    i=3,j=2;
    i/=j;       //這裡的i/=j相當於i=i/j!!
    printf("i的結果為:%d\n",i);
    i=3,j=2;
    i=i/j;
    printf("i的結果為:%d\n",i); 
    system("pause");
    return 0;
}
