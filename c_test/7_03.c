void do_it(int *a,int *b,int *c)           //*�����вŸ�,�|���o�U����"&a","&b","&c"��m!! 
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
    /*���o"int main()"��a,b,c����},�A�N���o����m���
    "do_it()��������"*a,*b,*c"�ҥH�Y�Odo_it()��"*a,*b,*c"�����e����,�]�| 
     ����"int main()"��"a,b,c"�����e!!(�����P�B����)*/ 
    system("pause");
    return 0;
}
