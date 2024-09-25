#include <iostream>
#include <vector>

std::vector<std::vector<int>> tr(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    
    std::vector<std::vector<int>> transposed(m, std::vector<int>(n));
    
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

int main() {
    int n, m;
    std::cin >> n; 
    std::cin >> m; 
    
    
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    
    
    std::vector<std::vector<int>> result = tr(matrix);
    
    
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[0].size(); ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl; 
    }
    
    return 0;
}
