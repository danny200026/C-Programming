int main()
{
    int i=3,j=2;
    i+=j;       //�o�̪�i+=j�۷��i=i+j!! 
    printf("i�����G��:%d\n",i);
    i=3,j=2;
    i=i+j;
    printf("i�����G��:%d\n",i);
    
    
    
    i=3,j=2;
    i-=j;       //�o�̪�i-=j�۷��i=i-j!! 
    printf("i�����G��:%d\n",i);
    i=3,j=2;
    i=i-j;
    printf("i�����G��:%d\n",i);
    
    
    
    i=3,j=2;
    i*=j;       //�o�̪�i*=j�۷��i=i*j!! 
    printf("i�����G��:%d\n",i);
    i=3,j=2;
    i=i*j;
    printf("i�����G��:%d\n",i);
    
    
    
    i=3,j=2;
    i/=j;       //�o�̪�i/=j�۷��i=i/j!!
    printf("i�����G��:%d\n",i);
    i=3,j=2;
    i=i/j;
    printf("i�����G��:%d\n",i); 
    system("pause");
    return 0;
}
