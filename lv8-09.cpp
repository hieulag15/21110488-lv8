#include<iostream>
#include<math.h>
void Nhapmang(float arr[], int &n);
void Xuatmang(float arr[], int n);
bool Kiemtra(int n);
int Timvitri(float arr[], int n);
float Songuyentolonnhat(float arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	float arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	if (Timvitri(arr,n) == -1){
		cout<<"0";
	} else {
		cout<<"So nguyen to lon nhat la: "<<Songuyentolonnhat(arr,n);
	}
	return 0;
}

void Nhapmang(float arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for (int i =0; i < n; i++) {
		cout<<"Arr["<<i<<"]= ";
		cin >> arr[i];
	}
}

void Xuatmang(float arr[], int n){
	for (int i = 0; i < n; i++)
	cout<<arr[i]<<"   ";
}

bool Kiemtra(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0){
			return false;
		}
	} return true;
}

int Timvitri(float arr[], int n){
	for (int i = 0; i < n; i++) {
		if (Kiemtra(arr[i])) {
			return i;
		}
	} 
	return -1;
}

float Songuyentolonnhat(float arr[], int n){
	int Vitri = Timvitri(arr,n);
	int max = arr[Vitri];
	for (int i = Vitri +1; i < n; i++){
		if ((Kiemtra(arr[i])) && (arr[i] > max )) {
			max = arr[i];
		}
	} return max;
}