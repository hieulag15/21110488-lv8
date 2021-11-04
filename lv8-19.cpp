#include<iostream>
using namespace std;
#define Max_Size 100
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Gopmang(int A[], int nA, int B[], int nB, int C[], int &nC);
void Reorganize(int arr[], int n);


int main() {
	int A[Max_Size], B[Max_Size], C[2*Max_Size];
	int nA,nB,nC;
	Nhapmang(A,nA);
	Nhapmang(B,nB);
	Gopmang(A,nA,B,nB,C,nC);
	Reorganize(C,nC);
	Xuatmang(C,nC);
	return 0;
}

void Nhapmang(int arr[], int &n) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Gopmang(int A[], int nA, int B[], int nB, int C[], int &nC){
	nC = 0;
	int iA = 0;
	int iB = 0;
	while (iA < nA){
		C[nC++] = A[iA++];
	}
	while (iB < nB){
		C[nC++] = B[iB++];
	}
}

void Reorganize(int arr[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (arr[i] > arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
