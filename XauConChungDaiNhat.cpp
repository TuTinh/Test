#include<iostream>
#include<algorithm>

using namespace std;

void Procedure_LCS(int n,char x[],int m,char y[]){
	int C[n][m];
	int i,j;
	
	for(i=0;i<n;i++) C[i][0]=0;
	for(j=0;j<m;j++) C[0][j]=0;
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			if(x[i]==y[j]) C[i][j] = C[i-1][j-1] + 1;
			else{
				C[i][j] = max(C[i-1][j],C[i][j-1]);
			}
		}
	}
	
	cout<<"  "<<C[n-1][m-1]+1<<endl;
	//Truy xuat
	
	i=n-1;
	j=m-1;
	cout<<i<<j<<endl;
	for(int t=1 ;t<=C[n-1][m-1]+1;t++){

		
		while(C[i][j]==C[i-1][j] || C[i][j]==C[i][j-1]){
			
			j--;
		}

		i--;
		cout<<x[i];
	}
	
	
	
//	i=n-1;
//	j=m-1;
//	while(i!=0 && j!=0){
//		if(C[i][j] != C[i-1][j] && C[i][j]!=C[i][j-1]){
//			cout<<x[i];
//			i--;
//			
//		}
//		j--;  
//		
//	}	
}



int main(){
	int n=7;
	char x[n]={'K','H','O','A','H','O','C'};
	int m=7;
	char y[m]={'H','O','A','H','O','N','G'};
	Procedure_LCS(n,x,m,y);
	
	
	
	return 0;
}
