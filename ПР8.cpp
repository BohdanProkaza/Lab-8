#include <bits/stdc++.h>
using namespace std;

double** arr_init(int narr){
	double **arr = new double*[narr];
	for(int i=0;i<narr;i++){    
    	arr[i] = new double[narr];    
  	}
  	return arr;
}

void in_arr(int narr, double **arr){	
	for(int i=0;i<narr;i++){
    	for(int j=0;j<narr;j++){	
      		arr[i][j] = double(rand());
    	}
  	}
}
	
void out_arr(int narr, double **arr){		
	cout << endl;
	for(int i=0;i<narr;i++){
    	for(int j=0;j<narr;j++){
      		cout << arr[i][j] << " ";
    		}cout << endl;
  	}
  	cout << endl;
}	

void find_darr(int narr, double **arr2, float *arr1){	
	for(int i=0;i<narr;i++){
		for(int j=0;j<=narr;j++){				
			if(i==j){
				arr1[i] = arr2[i][j];
			}
		}		
	}	
}

void sort_arr(int narr, float *arr1){
	for(int i=1;i<narr;i++){
		for(int j=0;j<=i;j++){
			float xx;
			if(arr1[i] < arr1[j]){
				xx = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = xx;
			}
		}
	}
}

void out_arr1(int narr, float *arr1){
	cout << endl;
	for(int i=0;i<narr;i++){
		cout << arr1[i] << " ";	
	}
	cout << endl;
}

void zam_darr(int narr, double **arr2, float * arr1){
	for(int i=0;i<narr;i++){
		arr2[i][i] = arr1[i];		
	}
}

	
int main (){
	int n;	
	cin >> n;
	srand(time(NULL));
	
	double **arr_a = arr_init(n);
	in_arr(n, arr_a);
	out_arr(n, arr_a);
	
	double **arr_b = arr_init(n);
	in_arr(n, arr_b);
	out_arr(n, arr_b);
	
	float *arr_a1 = new float[n];
	float *arr_b1 = new float[n];
	
	find_darr(n,arr_a,arr_a1);
	sort_arr(n,arr_a1);			out_arr1(n,arr_a1);
	
	find_darr(n,arr_b,arr_b1);
	sort_arr(n,arr_b1);			out_arr1(n,arr_b1);
	
	zam_darr(n, arr_a, arr_b1);
	zam_darr(n, arr_b, arr_a1);
	
	
	out_arr(n, arr_a);
	out_arr(n, arr_b);	
	
	return 0;
}
