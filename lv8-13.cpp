#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
int UCLNof2(int a, int b);
int UCLN(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl<<"Uoc chung lon nhat cua mang la: "<<UCLN(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

int UCLNof2(int a, int b){
	if ((a == 0) or (b == 0)) return a + b;
	while (a != b){
		if (a > b){
			a = a - b;
		} else {
			b = b -a;
		}
	}
	return a;
}

int UCLN(int arr[], int n){
	int ucln = arr[0];
	for (int i = 1; i < n; i++) {
		ucln = UCLNof2(ucln,arr[i]);
	}
	return ucln;
}