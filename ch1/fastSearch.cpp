#include <iostream>

static const int N = 10000;

int main(){
	
	int i,p,q,id[N];
	
	for(i = 0; i < N; i++) id[i] = i;
	
	while (std::cin >> p >> q){
		int tmp = id[p];
		if (tmp == id[q]) continue;
		
		for(i = 0; i < N; i++)
			if (id[i] == tmp) id[i] = id[q];
		std::cout << " " << p << " " << q << std::endl;
	}
	
	return 0;
}
