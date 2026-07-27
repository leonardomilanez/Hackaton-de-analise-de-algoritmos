void solution(int **v_input_a, int *v_input_b)
{
    // Looping through each value in v_input_b
    for (int i = 0; i < MAX_N_SIZE; i++)
    {
        int target = v_input_b[i];    // Target value from v_input_b
        int row = 0;                  // Start at the top row
        int col = MAX_N_SIZE - 1;     // Start at the last column

        v_output[i] = 0;              // Default value is 0 (not found)

        // Efficient search using the sorted property of the matrix
        while (row < MAX_N_SIZE && col >= 0)
        {
            // Cache v_input_a[row][col] into a local variable
            int val = v_input_a[row][col];
            if (val == target)
            {
                v_output[i] = 1;     // Value found, mark as found
                break;                // Exit the loop early
            }
            else if (val > target)
            {
                col--;              // Move left if the value is greater
            }
            else
            {
                row++;              // Move down if the value is smaller
            }
        }
    }
}
