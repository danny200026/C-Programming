int main()
{
  
    int a,b,c,max,min;
    
    printf("�п�J�T�ӼƦr\n"); 
    scanf("%d %d %d",&a,&b,&c);
    
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    
    printf("�̤j�Ƭ�:%d\n",max);
    printf("�̤p�Ƭ�:%d\n",min);  
    system("pause");
    return 0;
}
