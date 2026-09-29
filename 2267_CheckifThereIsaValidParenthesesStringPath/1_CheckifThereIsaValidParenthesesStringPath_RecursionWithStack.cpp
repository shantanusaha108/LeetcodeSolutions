#include<iostream>
#include<vector>
#include<stack>


class Solution {
public:

    bool ans(std::vector<std::vector<char>>& grid , size_t rows , size_t columns , std::stack<int> stck , int r = 0, int c = 0){

        if(grid[r][c] == '(') stck.push(1);
        else if(grid[r][c] == ')') {
            if(!stck.empty()) stck.pop();
            else return false;
        }

        if(r==rows && c==columns){
            if(stck.size()==0) return true;
            else return false;
        }else if(r==rows && c<columns){
            return ans(grid,rows,columns,stck,r,c+1);
        }else if(c==columns && r<rows){
            return ans(grid,rows,columns,stck,r+1,c);
        }
        return ans(grid,rows,columns,stck,r+1,c) || ans(grid,rows,columns,stck,r,c+1);
        
    }

    bool hasValidPath(std::vector<std::vector<char>>& grid) {
        size_t rows = grid.size()-1;
        size_t columns = grid[0].size()-1;
        if (grid[0][0] != '(' || grid[rows][columns] != ')')
            return false;
        std::stack<int> stck;
        return ans(grid,rows,columns,stck);
    }
};

int main(){
    std::vector<std::vector<char>> testcase = {
        {'(', '(', ')', ')', ')', '(', '(', ')', '(', '(', ')', '(', ')', '(', '(', ')'},
        {')', '(', ')', ')', ')', ')', '(', '(', '(', '(', ')', ')', '(', '(', '(', '('},
        {'(', ')', ')', ')', '(', '(', '(', ')', '(', '(', ')', ')', ')', '(', ')', ')'},
        {'(', '(', ')', ')', ')', ')', '(', '(', '(', ')', '(', '(', '(', ')', '(', '('},
        {'(', '(', '(', '(', '(', '(', ')', ')', ')', '(', '(', ')', ')', '(', ')', ')'},
        {'(', '(', ')', '(', ')', '(', '(', '(', '(', ')', ')', ')', '(', '(', ')', ')'},
        {')', '(', '(', '(', ')', '(', ')', ')', ')', ')', '(', '(', ')', ')', ')', '('},
        {'(', '(', '(', ')', '(', '(', ')', ')', ')', '(', '(', ')', '(', ')', ')', '('},
        {')', ')', '(', ')', ')', ')', '(', '(', '(', ')', '(', '(', ')', '(', ')', ')'},
        {'(', '(', ')', ')', ')', '(', ')', ')', ')', ')', '(', ')', '(', '(', '(', ')'},
        {'(', '(', '(', ')', '(', ')', ')', '(', '(', ')', ')', ')', '(', ')', '(', ')'},
        {'(', ')', ')', ')', ')', ')', ')', '(', ')', ')', ')', ')', '(', ')', ')', ')'},
        {')', '(', ')', ')', '(', '(', '(', '(', '(', ')', '(', ')', '(', ')', '(', ')'},
        {')', ')', ')', ')', '(', ')', ')', '(', ')', ')', ')', ')', '(', '(', ')', ')'}
    };

    Solution sol;
    bool ans = sol.hasValidPath(testcase);
    std::cout<<std::boolalpha<<ans<<std::endl;
    return 0;
}