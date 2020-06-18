#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the order of the matrix: ");
    scanf("%d%d",&m,&n);
    {
        int arr[m][n],arrt[n][m];
        int i,j;
        printf("Enter the elements of the matrix: \n");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",(*(arr+i)+j));
        printf("The matrix entered by you is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",*(*(arr+i)+j));

            }
            printf("\n");
        }
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                *(*(arrt+j)+i)=*(*(arr+i)+j);
        printf("The transpose of the matrix is: \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",*(*(arrt+i)+j));

            }
            printf("\n");
        }
    }
    return 0;
}
