//#include <iostream>
//using namespace std;
//int main() {
//	int nums[10] = {2,6,4,8,7,9,4,5};
//	for(int i=0; i<10; i++){
//		cout << "nums[" << i << "]: " << nums[i] << endl;
//	}
//	
//	cout << nums << endl;
//	cout << &nums[0] << endl;
//	
//	int* pnums;
//	pnums = nums;
//	cout << *pnums << endl;
//	for(int i=0; i<10; i++){
//		cout << pnums << ":";
//		cout << *(pnums+i) << endl;
//	}
//	
//	//pnums+1 successor
//	//pnums-1 predecessor
//	
//	cout << "another way" <<endl;
//	for(int i=0; i<10; i++){
//		cout << pnums++ << ":";
//		cout << *pnums << endl;
//	}
//	
//	
//}