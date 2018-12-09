#include <bits/stdc++.h>
using namespace std;
	
int main (){
	float a[102][102], b[102][102];
	float  a1[102] = {0}, b1[102] = {0};
	int n;
	
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];	
			if(i==j){
				a1[i] = a[i][j];
			}
		}		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> b[i][j];	
			if(i==j){
				b1[i] = b[i][j];
			}			
		}		
	}
	
	cout << endl << " a before" << endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";							
		}
		cout << endl;
	}
	cout << endl << " b before" << endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << b[i][j] << " ";							
		}
		cout << endl;
	}
	
	
//	cout << endl << " before"<< endl << endl;
//	for(int i=1;i<=n;i++){
//		cout << a1[i] << " "; 
//	}	cout << endl;
//	cout << endl << " before"<< endl << endl;
//	for(int i=1;i<=n;i++){
//		cout << b1[i] << " "; 
//	}	cout << endl;
	
	sort(a1+1,a1+n+1);
	sort(b1+1,b1+n+1);
	
//	cout << endl << " after"<< endl << endl;
//	for(int i=1;i<=n;i++){
//		cout << a1[i] << " "; 
//	}	cout << endl;
//	cout << endl << " after"<< endl << endl;
//	for(int i=1;i<=n;i++){
//		cout << b1[i] << " "; 
//	}	cout << endl;
	
	for(int i=1;i<=n;i++){
		a[i][i] = b1[i];
		b[i][i] = a1[i];
	}
	
	cout << endl << " a after" << endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";							
		}
		cout << endl;
	}
	cout << endl << " b after" << endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << b[i][j] << " ";							
		}
		cout << endl;
	}
	
	

	return 0;
}

