int main()
{
    int x;
    
    printf("���H�N��J���@�Ʀr\n"); 
    
    scanf("%d",&x);
    
    if (x%2>0)
        printf("�A��J���Ʀr%d,�O�_��\n",x);
   
    else if (x%2==0)
        printf("�A��J���Ʀr%d,�O����\n",x);
   
    else
        printf("�A��J���r������L�r��!!!",x); 
        
    system("pause");
    return 0;
}
