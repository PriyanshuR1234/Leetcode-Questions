import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        
        for (int i = 0; i < numRows; i++) {
            List<Integer> row = new ArrayList<>();
            
            for (int j = 0; j <= i; j++) {
                // The first and last elements of every row are always 1
                if (j == 0 || j == i) {
                    row.add(1);
                } else {
                    // Fetch and sum the two elements directly above from the previous row
                    int left = ans.get(i - 1).get(j - 1);
                    int right = ans.get(i - 1).get(j);
                    row.add(left + right);
                }
            }
            
            ans.add(row);
        }
        
        return ans;
    }
}
