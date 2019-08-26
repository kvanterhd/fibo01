#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inf("input.txt");
   ofstream outf("output.txt");
	
	
	unsigned long long int a[9999];
	int n;
	inf >> n;	
	a[0]=a[1]=1;
	for(int i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		
	}
for(int i=0;i<n-1;i++)
	{
		outf<<a[i]<<' ';
		
	}




	outf<<a[n-1]<<endl;
	
	
	inf.close();
   outf.close();
	
	
	
	
	
	
	return 0;
}
