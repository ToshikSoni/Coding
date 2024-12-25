class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        vector<char> temp, temp1;
        for (int i = 0; i < 9; i += 3)
            for (int j = 0; j < 9; j += 3)
            {
                for (int k = i; k < i + 3; k++)
                    for (int l = j; l < j + 3; l++)
                        if (board[k][l] != '.')
                            temp.push_back(board[k][l]);
                if (temp.size() == 0)
                    continue;
                sort(temp.begin(), temp.end());
                for (int i = 0; i < temp.size() - 1; i++)
                    if (temp[i] == temp[i + 1])
                        return false;
                temp.clear();
            }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                    temp.push_back(board[i][j]);
                if (board[j][i] != '.')
                    temp1.push_back(board[j][i]);
            }
            if (temp.size() != 0)
            {
                sort(temp.begin(), temp.end());
                for (int i = 0; i < temp.size() - 1; i++)
                    if (temp[i] == temp[i + 1])
                        return false;
            }
            if (temp1.size() != 0)
            {
                sort(temp1.begin(), temp1.end());
                for (int i = 0; i < temp1.size() - 1; i++)
                    if (temp1[i] == temp1[i + 1])
                        return false;
            }
            temp.clear();
            temp1.clear();
        }
        return true;
    }
};