int main()
{
    int i=3,j=2,k=10;
    i*=j+k;   //這個簡式的結果相當於i=i*(j+k)!! 
    printf("i的結果為:%d",i);
    i=3,j=2,k=10;
    i=i*(j+k);
    printf("i的結果為:%d",i);
    i=3,j=2,k=10;
    i=i*j+k;
    printf("i的結果為:%d",i);
    
    
    i=3,j=2,k=10;
    i/=j+k;  //這個簡式的結果相當於i=i/(j+k)!! 
    printf("i的結果為:%d",i);
    i=3,j=2,k=10;
    i=i/(j+k);
    printf("i的結果為:%d",i);
    i=3,j=2,k=10;
    i=i/j+k;
    printf("i的結果為:%d",i);     
    system("pause");
    return 0;
}
