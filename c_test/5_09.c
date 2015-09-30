int main()
{
    int x,y;
    
    for(x=1;x<=9;x++)
    {
        for(y=1;y<=9;y++)
        {
            printf("%d*%d=%d\t",x,y,x*y);
        }
      printf("\n");
    }   
    system("pause");
    return 0;
}
