#include <stdio.h>
main()
{
      int height, width, depth;
      int area, volume;
      
      printf("�Ф��O��J���סB�e�סB�`��\n");
      
      printf("����(height) = ");
      scanf("%d", &height);
      
      printf("�e��(width) = ");
      scanf("%d", &width);
      
      printf("�`��(depth) = ");
      scanf("%d", &depth);
      
      
      // �p����n 
      area = 4 * (height * width) + 2 * (height * depth);
      
      // �p����n
      volume = height * width * depth;
      
      
      printf("���n���G%d\n", area);
      printf("��n���G%d", volume);
      
}
