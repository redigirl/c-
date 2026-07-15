#include <iostream>

using  namespace std;

//int add(int a, int b);
int add(int a, int b) {
	return a+b;
}
int main() {
	
    int a=10;
	int b=20;
	int sum;
    sum =add(a, b);
	cout<<"sum of the two num is:"<<sum<<endl;
	
	
	return 0;	
}


