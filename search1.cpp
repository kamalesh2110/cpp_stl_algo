#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n,find;
	cin>>n;
	int a[n]
	for(int i=0;i<n;i++)
	{
	  cin>>a[i];
	  }
	  cin>>find;
	  if(binary_search(a,a+n,find))
	  cout<<"Yes";
	  else
	  cout<<"no";
	
	return 0;
}
	  
	  
/*Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.
It works by comparing the middle item of the array with our target, if it matches, it returns true otherwise if the middle term is greater than the target, the search is performed in the left sub-array. 
If the middle term is less than the target, the search is performed in the right sub-array.*/
