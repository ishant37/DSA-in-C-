class Solution(object):
    def searchMatrix(self, matrix, target):
        r = 0
        c = len(matrix[0]) - 1
        while r < len(matrix) and c >= 0:
            if matrix[r][c] == target:
                print("Elemrnt is in the matrix")
                return True
            elif matrix[r][c] > target:
                c -= 1
            else:
                r += 1
        return False
    


# Example usage:
arr = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]]
target = 90
sol = Solution()
print(sol.searchMatrix(arr, target))