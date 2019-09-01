#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//This is a problem to find magnitude (+) of the difference of sum of both the diagonal elements of square matrix.
//Somehow,, I am not getting an error here, plz help !!
int main()
{       int a,b,sum=0,sum1=0,sum2=0,i,j;
        scanf("%d",&a);
        int mat[a][a];
        printf("Enter the elements");
        for(i=0;i<a;i++)
        {
        for(j=0;j<a;j++)
        {
         scanf("%d",&mat[i][j]);
        }
        }

        for(int i=0;i<a;i++)
        {
        for(int j=0;j<a;j++)
        {
        if(i==j)
        {
            sum1=sum1+mat[i][j];
        }
        else if(i+j==a)
        {
            sum2=sum2+mat[i][j];
        }
        }
        }
        sum=sum1-sum2;
        if(sum<0)
        {
          sum=0-sum;
        }
        printf("%d",sum);
}
