//#include <iostream>
//using namespace std;
//
//void show(int *nums, int n){
//	for(int i=0; i<n; i++){
//		cout << *(nums+i) << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	int n;
//	cout << "How many numbers you want to enter: ";
//	cin >> n;
//	
//	int *nptr  = new int[n];
//	
//	show(nptr, n);
//	
//	cout << "Enter " << n << " numbers: ";
//	for(int i=0; i<n; i++){
//		cin >> *nptr;
//		nptr++;
//	}
//	nptr = nptr - n;
//	show(nptr, n);
//	
//	cout << "new numbers (how many numbers): ";
//	cin >> n;
//	nptr  = new int[n];
//	cout << "Enter " << n << " numbers: ";
//	for(int i=0; i<n; i++){
//		cin >> *nptr;
//		nptr++;
//	}
//	nptr = nptr - n;
//	show(nptr, n);
//	
//	
//	
//	return 0;
//}