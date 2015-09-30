int main()
{
    int c=1;
    while(c<=20)
    {
        c++;
        
        if(c==5)
        continue;   //跳過這個動作,繼續上面的迴圈(在這裡跳過列印5這個動作)        
        
        printf("c=%d\t",c);
           
    }
    system("pause");
    return 0;
}
