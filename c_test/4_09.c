int main()
{
    int a,b,x;
    
    printf("�п�J��ӼƦr\n");
    
    scanf("%d %d",&a,&b);
    
        x=(a>b)?
        printf("�Ĥ@�ӼƦr�O:%d\n�ĤG�ӼƦr�O:%d\n%d&%d�����G��:%d\n",a,b,a,b,a&b):
        printf("�Ĥ@�ӼƦr�O:%d\n�ĤG�ӼƦr�O:%d\n%d|%d�����G��:%d\n",a,b,a,b,a|b);    
    system("pause");
    return 0;
}
