// Author : nishj347@ github
// pattern 1
void nForest(int n) {
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}


// pattern2
void nForest(int n) {
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
