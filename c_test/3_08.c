int main()
{
    int x=7,y=10;
    y=x+++y;
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=y+++x;
    printf("x=%d,y=%d\n",x,y);
    system("pause");
    return 0;
}
