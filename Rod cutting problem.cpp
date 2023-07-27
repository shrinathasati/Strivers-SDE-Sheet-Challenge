int cutRod(vector<int> &price, int n)

{

     int a[n];

     

       for(int i=0; i<n; i++)

        a[i]=i+1;

      

       int t[n+1][n+1];

       for(int i=0; i<n+1; i++)

       {

           for(int j=0; j<n+1; j++)

           {

               if(i==0)

               t[i][j]=0;

               if(j==0)

               t[i][j]=0;

           }

       }

      

        

        for(int i=1; i<n+1; i++)

        {

            for(int j=1; j<n+1; j++)

            {

                if(a[i-1]<=j)

                t[i][j]=max(price[i-1]+t[i][j-a[i-1]], t[i-1][j]);

                else

                t[i][j]=t[i-1][j];

            }

        }

       

       return t[n][n];
}
