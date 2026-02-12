// Print Matrix in wave form

// m -> rows  ,, n -> cols

for (int j = 0; j < n; j++){
    if (j % 2 == 0){
        for (int i = 0; i < m; i++){
            cout << matrix[i][j]; << " "; 
        }
    }
    else{
        for (int i = m - 1; i >= 0; i--){
            cout << matrix[i][j]; << " "; 
        }
    }
}