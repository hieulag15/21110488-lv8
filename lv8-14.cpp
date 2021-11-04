#include<iostream>
void Nhapmang(float arr[], int &n);
void Xuatmang(float arr[], int n);
float Max(float arr[], int n);
float Min(float arr[], int n);
void Timdoan(float arr[], int n, int &x, int &y);
void Xuatkq(int x, int y);
using namespace std;

#define Max_Size 100


int main() {
	float arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	int x,y;
	Timdoan(arr,n,x,y);
	Xuatkq(x,y);
	return 0;
}

void Nhapmang(float arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

float Max(float arr[], int n){
	float max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

float Min(float arr[], int n){
	float min = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

void Timdoan(float arr[], int n, int &x, int &y){
	float max = Max(arr,n);
	float min = Min(arr,n);
	x = (int)min;
	if (x < 0)
		if (min - x != 0)
			x--;
			
	y = (int)max;
	if (y > 0)
		if (max - y != 0)
			y++;
}

void Xuatkq(int x, int y){
	cout<<"Nam trong doan ["<<x<<":"<<y<<"]";
}
