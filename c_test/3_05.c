int main()
{
    int x=7,y=10;
    y=x++;
    printf("x=%d,y=%d\n",x,y);
    x=7,y=10;
    y=(x++);     //�A���b�o�̨èS���o���ĥ�,���G���M��x=8,y=7!! 
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
