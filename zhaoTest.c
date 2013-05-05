#include<stdio.h>
void BubbleSort(int *pData, int ncount)
{
  int temp, i, j;
  for(i=0;i<ncount;i++)
  {
    for(j=ncount-1; j>i; j--)
    {
      if (pData[j] < pData[j-1])
      {
	temp=pData[j];
      	pData[j] = pData[j-1];
      	pData[j-1] = temp;
      }
    }
  }
}

int main()
{
  int i;
  int Data[] = {10,9,8,7,6,5};
  BubbleSort(Data,6);
  for(i=0;i<6;i++)
   printf("%d", Data[i]);
  printf("\n");
  return 0;
}

//add by kevin 
