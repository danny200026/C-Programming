int main()
{
    int a=1;
    
    while(a<=25)
    {
        printf("a=%d\t",a);
        a++;
        
        if(a==21)
        break;    //直接跳出回圈 
    }
      
    system("pause");
    return 0;
}
