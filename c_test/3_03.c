int main()
{
    int x=7,y=10;          
    y=x++;
    printf("x=%d,y=%d",x,y);
    y=++x;
    printf("\nx=%d,y=%d",x,y);
    y=x--;
    printf("\nx=%d,y=%d",x,y);
    y=--x;
    printf("\nx=%d,y=%d",x,y);
    system("pause");
    return 0;
}
