int main()
{
    int x=7,y=10;
    y=x---5;
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=--x-5;
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=5-x--;
    printf("x=%d,y=%d\n",x,y);
    system("pause");
    return 0;
}
