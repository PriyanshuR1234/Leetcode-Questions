import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;
        
        // Group items sharing the same (i + j) index sum
        List<List<Integer>> ans = new ArrayList<>();
        for (int i = 0; i < n + m - 1; i++) {
            ans.add(new ArrayList<>());
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans.get(i + j).add(mat[i][j]);
            }
        }

        // Process diagonals and merge them into the first row
        for (int i = 0; i < ans.size(); i++) {
            // Even diagonals go upward, so they need to be reversed
            if (i % 2 == 0) {
                Collections.reverse(ans.get(i));
            }

            // Append elements from row i to row 0 (except row 0 itself)
            if (i != 0) {
                ans.get(0).addAll(ans.get(i));
            }
        }

        // Convert List<Integer> to the required native int[] array
        int[] finalResult = new int[n * m];
        List<Integer> firstRow = ans.get(0);
        for (int i = 0; i < firstRow.size(); i++) {
            finalResult[i] = firstRow.get(i);
        }

        return finalResult;
    }
}
