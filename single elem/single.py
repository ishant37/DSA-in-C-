def single(arr):
    result = 0
    for num in arr:
        result ^= num  # XOR operation
    return result

# Test input
arr = [3, 3, 7, 7, 10, 11, 11]
unique_element = single(arr)
print(unique_element)
