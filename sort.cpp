#include <iostream>
using namespace std;
void printArray(int array[], int size);
void bsort(int arr[],int size);
int main()
{
	int arr[5]={5,2,45,41,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	bsort(arr,size);
	printArray(arr,size);
	
	
}
void bsort(int arr[],int size)
{
	for(int i=0;i<size-1;++i)
	{
		int Swap=0;
		for(int j=0;j<(size-(i-1));++j)
		{
			if(arr[j]>arr[j+1])
			{
			int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        Swap = 1;
			}
		}
		if (Swap==0)
		break;
	}
}
void printArray(int arr[], int size) 
{
  for (int i = 0; i < size; ++i)
   {
    cout << "  " << arr[i];
  }
  cout << "\n";
}
