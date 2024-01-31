void bubblesort(int a[],int n)
{
    int i,j;
    printf("Bubble Sort\n");
    for(i=0;i<n-1;i++)
        {
        printf("\n==i=%d==\n",i);
        for(j=0;j<n-1;j++)
        {		if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
                display(a,n);
        }
      printf("\n");
  }
}