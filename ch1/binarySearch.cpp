#include <iostream>

int bSearch(int x[], int v, int l, int r)
{
	while (r >= 1){
		int m = (l + r) / 2;
		if (x[m] == v) return m;
		if (v < x[m]) r = m-1; else l = m+1;
	}
	std::cout << "No victim" << std::endl; 
	return -1;
}

int main(){
	int x[10000];
	for (int i=0; i<10000; i++)
		x[i] = i;
		
	std::cout << bSearch(x, 1000, 0, 1000) << std::endl;
	return 0;
}
