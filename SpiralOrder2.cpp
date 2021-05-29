vector<vector<int>> Solution::generateMatrix(int n)
{
    vector<vector<int>> result(n, vector<int>(n, 0));
    int top = 0, right = n - 1, left = 0, bottom = n - 1;
    int num = 1;

    while (num <= n * n)
    {
        for (int i = left; i <= right; i++)
            result[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++)
            result[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--)
            result[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--)
            result[i][left] = num++;
        left++;
    }
    return result;
}
