void insertionsort(int a[], int n)
{
    int i,j,value;
    printf("Insertion Sort\n");
    for (i=0;i<n;i++)
    {
        value = a[i];
        j=i-1;
        printf("\n==i=%d==\n",i);

        while (j>=0&&a[j]>value)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=value;
        display(a,n);
    }
    printf("\n");
}

/*
  int node ; 
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap = mem;
      mem = swap[1][2];
      
    }
  }

*/