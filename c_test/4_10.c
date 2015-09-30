int main()
{
  
    int a,b,c,max,min;
    
    printf("叫块计\n"); 
    scanf("%d %d %d",&a,&b,&c);
    
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    
    printf("程计:%d\n",max);
    printf("程计:%d\n",min);  
    system("pause");
    return 0;
}
