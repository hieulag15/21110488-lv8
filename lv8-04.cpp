#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Check(int n);
int Value(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl<<"Gia tri le dau la: "<<Value(arr,n);
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

bool Check(int n){
	int fist;
	while (n > 0){
		fist = n % 10;
		n /= 10;
	}
	if (fist % 2 == 0)	
		return false;
	return true;
}

int Value(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (Check(arr[i]))
			return arr[i];
	}
	return 0;
}