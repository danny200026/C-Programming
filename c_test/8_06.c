void re(int a)
{
    if(a==10)
        printf("finish\n");
    else
    {
        printf("%d\n",a);
        re(++a);
        
        printf("%d\n",a);    //要注意的是,這三行雖然跳過;但是等到上面的遞迴結束後 
        a=a-3;               //會從最後得到的值開始重新扣掉  
        printf("%d\n",a);    //例如:這裡是重10開始:10-3=7,9-3=6,8-3=5,7-3=4.....到4-3=1!! 
    }
       
}

int main()
{
    re(3);   
    
    system("pause");
    return 0;
}
