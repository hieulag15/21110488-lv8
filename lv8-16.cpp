#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Add(int arr[], int &n, int Val, int k);
void Subtraction(int ar[], int &n, int k);
using namespace std;

#define Max_Size 100

int main() {
	int arr[Max_Size];
	int n,Val,k;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl<<"=======THEM PHAN TU======";
	cout<<endl<<"Nhap k:";
	cin >> k;
	cout<<endl<<"Nhap VAl:";
	cin >> Val;
	Add(arr,n,Val,k);
	Xuatmang(arr,n);
	cout<<endl<<"=======XOA PHAN TU======";
	cout<<endl<<"Nhap k:";
	cin >> k;
	Subtraction(arr,n,k);
	Xuatmang(arr,n);
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

void Add(int arr[], int &n, int Val, int k){
	if (n > Max_Size)
		return;
	for (int i = n; i > k + 1 ; i--){
		arr[i] = arr[i - 1];
	}
	arr[k +1] = Val;
	n++;
}

void Subtraction(int arr[], int &n, int k){
	if (n < 0)
		return;
	for (int i = k; i < n - 1; i++){
		arr[i] = arr[i + 1];
	}
	n--;
}
