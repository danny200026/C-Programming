int main()
{
    int x=7,y=10;
    y=x++;
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=(x++);     //括號在這裡並沒有發揮效用,結果仍然為x=8,y=7!! 
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=--x;
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=(--x);
    printf("x=%d,y=%d\n",x,y);
    system("pause");
    return 0;
}
