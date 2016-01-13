#include <stdio.h>
main()
{
      int height, width, depth;
      int area, volume;
      
      printf("請分別輸入高度、寬度、深度\n");
      
      printf("高度(height) = ");
      scanf("%d", &height);
      
      printf("寬度(width) = ");
      scanf("%d", &width);
      
      printf("深度(depth) = ");
      scanf("%d", &depth);
      
      
      // 計算表面積 
      area = 4 * (height * width) + 2 * (height * depth);
      
      // 計算體積
      volume = height * width * depth;
      
      
      printf("表面積為：%d\n", area);
      printf("體積為：%d", volume);
      
}
