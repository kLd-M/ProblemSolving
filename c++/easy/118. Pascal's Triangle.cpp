//Approach: Use a vector of vectors to store the triangle.
// Start with the first row initialized to {1} 
// For each subsequent row, start with 1, then calculate the inner values
// by summing the two values from the previous row, and end with 1.



class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector <vector<int>> triangle;

        if (numRows == 0)
            return triangle;
        
        triangle.push_back({1});
        for (int i = 1 ; i< numRows ; ++i)
        {
            vector <int> row;
            row.push_back(1);

            for (int j= 1 ; j < i ; ++j)
            {
                row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            }
            row.push_back(1);
            triangle.push_back(row);
        }

        return triangle;
    }
};