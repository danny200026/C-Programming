int main()
{
    int x=5,y=2,z=10,c;
    c=((x++)*3)+2+(--y)*2+((z--)*2);
    printf("x=%d,y=%d,z=%d,c=%d\n",x,y,z,c);
    x=5,y=2,z=10,c;
    z=((x++)*3)+2+(--y)*2+((z--)*2);
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    system("pause");
    return 0;
}
