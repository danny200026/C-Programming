void do_it(int *a,int *b,int *c)           //*為指標符號,會取得下面的"&a","&b","&c"位置!! 
{
printf("The original is a=%d b=%d c=%d\n",*a,*b,*c);
    *a=*a+1;
    *b=*b+2;
    *c=*c+3;
printf("The result is a=%d b=%d c=%d\n\n",*a,*b,*c);
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    do_it(&a,&b,&c);     
    do_it(&a,&b,&c);     
    do_it(&a,&b,&c);
    do_it(&a,&b,&c);
    /*取得"int main()"中a,b,c的位址,再將取得的位置丟到
    "do_it()中對應的"*a,*b,*c"所以若是do_it()中"*a,*b,*c"的內容改變,也會 
     改變"int main()"中"a,b,c"的內容!!(類似同步執行)*/ 
    system("pause");
    return 0;
}
