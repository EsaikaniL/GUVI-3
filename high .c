int countTriplets(int arr[], int n, int m)
{
    unordered_map<int, int> occ;
    for (int i = 0; i < n; i++)
        occ[arr[i]] = i;
 
    int count = 0;
 
   
    for (int i = 0; i < n - 1; i++)
    { 
        for (int j = i + 1; j < n; j++)
        {
            
            if ((arr[i] * arr[j] <= m) && 
                (arr[i] * arr[j] != 0) && 
                (m % (arr[i] * arr[j]) == 0)) 
            {
                int check = m / (arr[i] * arr[j])
                if (check != arr[i] && check != arr[j]
                    && it != occ.end() && it->second > i
                    && it->second > j)
                    count++;
            }
        }
    }
    return count;
}
