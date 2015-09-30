int main()
{
    int z=2,j=3,k=4;
       
    z+=j;
    printf("z=%d,j=%d,k=%d\n",z,j,k);
    
    z-=z-j;
    printf("z=%d,j=%d,k=%d\n",z,j,k);
    
    z*=j+k;
    printf("z=%d,j=%d,k=%d\n",z,j,k);
    
    z%=j*k;
    printf("z=%d,j=%d,k=%d\n",z,j,k);
    
    z/=j+k;
    printf("z=%d,j=%d,k=%d\n",z,j,k);
    system("pause");
    return 0;
}
