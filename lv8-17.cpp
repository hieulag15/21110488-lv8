#include<iostream>
void Nhapmang(int arr[], int &n, int &x);
void Xuatmang(int arr[], int n);
void Location(int arr[], int n,int x, int &vt);
void Add(int arr[], int &n, int Val, int k);
using namespace std;

#define Max_Size 100
int main() {
	int arr[Max_Size];
	int n,k,x;
	Nhapmang(arr,n,x);
	Xuatmang(arr,n);
	Location(arr,n,x,k);
	Add(arr,n,x,k);
	cout<<endl<<"Mang sau khi chen"<<endl;
	Xuatmang(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n, int &x) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
	cout<<"Nhap x: ";
	cin >> x;
}

void Xuatmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Location(int arr[], int n,int x, int &vt){
	for (int i = 0; i < n; i++){
		if (x < arr[i])
			vt = i-1;
	}
}

void Add(int arr[], int &n, int Val, int k){
	if (n > Max_Size)
		return;
	for (int i = n; i > k; i--){
		arr[i] = arr[i - 1];
	}
	arr[k] = Val;
	n++;
}
