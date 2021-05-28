vector<int> Solution::plusOne(vector<int> &A)
{
    int index = A.size() - 1;
    while (index >= 0)
    {
        if (A[index] == 9)
            A[index] = 0;
        else
        {
            A[index] += 1;
            int j = 0;
            while (A[j] < 1)
            {
                A.erase(A.begin() + j);
            }
            return A;
        }
        index--;
    }
    A.insert(A.begin(), 1);
    return A;
}