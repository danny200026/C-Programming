void do_it(int a,int b,int c)   
/*注意!!這裡的"do_it()"函式和"int main()在記憶體中位址不同!!
當然在這裡宣告的"a","b","c"和"int_main()裡宣告的"a","b","c"不同!!!*/ 
{
printf("The original is a=%d b=%d c=%d\n",a,b,c);
    a=a+1;
    b=b+2;
    c=c+3;
    printf("The result is a=%d b=%d c=%d\n\n",a,b,c);
}


int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    do_it(a,b,c);    
    do_it(a,b,c);   
    do_it(a,b,c);   
    do_it(a,b,c);   
/*將"int main()"中的a,b,c位址內的資料"複製"到"do_it()"內對應的位址並執行!!
注意!!這個時候"int main()和do_it中的a,b,c資料是獨立的,不會互相影響!!   
    system("pause"); 
    return 0;
}
