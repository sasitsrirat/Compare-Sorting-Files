void selectionsort(int *a,int n)
{
    int mi,i,j;
    printf("Selection Sort\n");
    for(i=0;i<n-1;i++)
        {
        mi=i;
        printf("\n==i=%d==\n",i);
        for(j=i;j<n;j++){
            if(a[j]<a[mi])
                mi=j;
        }
        if(i!=mi)
            swap(&a[i],&a[mi]);
            display(a,n);
    }
    printf("\n");
}