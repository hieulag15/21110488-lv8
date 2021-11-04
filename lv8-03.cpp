#include<iostream>
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl<<"gia tri so ganh dau tien la: "<<Giatri(arr,n);
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

bool Kiemtra(int n){
	int s = n, last, sodao = 0;
	while (s > 0){
		last = s % 10;
		s /= 10;
		sodao = sodao * 10 + last;
	}
	if (sodao == n)
		return true;
	return false;
}

int Giatri(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (Kiemtra(arr[i]))
			return arr[i];
	}
	return 0;
}