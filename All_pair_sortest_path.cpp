for(int k=0;k<node;k++)
     for(int i=0;i<node;i++)
         for(int j=0;j<node;j++)
               mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
         
