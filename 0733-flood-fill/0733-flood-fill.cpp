class Solution {
public:
    void recurse(vector<vector<int>>& image, int sr, int sc, int color, int num) {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size()) {
            return;
        }
        
        if (image[sr][sc] != num) {
            return;
        }

        image[sr][sc] = color;

        recurse(image, sr - 1, sc, color, num);
        recurse(image, sr + 1, sc, color, num);
        recurse(image, sr, sc - 1, color, num);
        recurse(image, sr, sc + 1, color, num);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        
        if (originalColor != color) {
            recurse(image, sr, sc, color, originalColor);
        }
        
        return image;
    }
};
