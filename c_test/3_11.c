int main()
{
    int i=3,j=2,k=10;
    i*=j+k;   //�o��²�������G�۷��i=i*(j+k)!! 
    printf("i�����G��:%d",i);
    i=3,j=2,k=10;
    i=i*(j+k);
    printf("i�����G��:%d",i);
    i=3,j=2,k=10;
    i=i*j+k;
    printf("i�����G��:%d",i);
    
    
    i=3,j=2,k=10;
    i/=j+k;  //�o��²�������G�۷��i=i/(j+k)!! 
    printf("i�����G��:%d",i);
    i=3,j=2,k=10;
    i=i/(j+k);
    printf("i�����G��:%d",i);
    i=3,j=2,k=10;
    i=i/j+k;
    printf("i�����G��:%d",i);     
    system("pause");
    return 0;
}
