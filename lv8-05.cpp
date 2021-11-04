#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtra(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	if (Kiemtra(arr,n)){
		cout<<endl<<"Mang mang tinh chat song";
	} else {
		cout<<endl<<"Mang khong mang tinh chat song";
	}
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for (int i = 0; i < n; i++) {
		cout<<"Arr["<<i<<"]= ";
		cin >> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for (int i = 0; i < n; i++)
	cout<<arr[i]<<"   ";
}

bool Kiemtra(int arr[], int n){
	for (int i = 1; i < n - 1; i++){
		if (((arr[i] >= arr[i - 1]) && (arr[i] <= arr[i + 1])) or ((arr[i] <= arr[i - 1]) && (arr[i] >= arr[i + 1])))
			return false;
	}
	return true;
}