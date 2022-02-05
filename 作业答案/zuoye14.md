1. 设计一个$O(n^2)$时间的算法，找出由n个数组成的序列中最长非递减子序列。

   ```c++
   void getSLIS(int* f, int* s, vector<int>& LIS, int n)
   {
       for (int i = 0; i < n; i++)
       {
           s[i] = 1;//初始化每个子序列长度为1
           for (int j = 0; j < i; j++)
           {
               int k = 0;
               if (f[i]>f[j] && s[i] + 1>s[j])//更新条件
               {
                   s[i] = s[j] + 1;//更新
               }
           }
       }
   }
   ```

   