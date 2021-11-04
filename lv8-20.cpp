#include<iostream>
using namespace std;
#define Max_Size 100
void Nhapmang(int arr[], int &n);

int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
		if (i > 0){
			for (int a = 0; a <= i-1; a++){
				for (int b = a + 1; b <= i; b++){
					if (arr[a] > arr[b]){
						int tmp = arr[a];
						arr[a] = arr[b];
						arr[b] = tmp;
					}
				}	
			}
		}
		for (int j = 0; j <= i; j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
}
