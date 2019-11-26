class Solution {
public:
    string longestPalindrome(string s) {
        int begin = 0, longest = 0, len = 0, bias = 0;
        for (int i=0; i<s.size(); ++i) {
            // 当前字符和前一个字符相同则跳过
            if (i > 0 && s[i] == s[i-1]) continue;

            bias = 0;
            // 从当前字符开始，向后找到和当前字符相同的字符，作为回文串的中心
            for (int j=i; j<s.size()-1; ++j)
                if (s[j] == s[j+1]) ++bias;
                else break;
            // 第i轮循环可能找到的最长回文子串若不大于此前的最大值，则结束循环
            if ((s.size() - i)*2 - bias - 1 <= longest) break;
            // 从回文串的中心向两侧寻找
            for (len=1; len<i+1 && len<s.size()-i-bias; ++len) {
                if (s[i-len] != s[i+len+bias])
                    break;
            }
            // 计算当前最长回文子串的长度以及起始位置
            if (longest < len*2 - 1 + bias) {
                longest = len*2 - 1 + bias;
                begin = i - len + 1;
            }
        }
        return s.substr(begin, longest);
    }
};

int comp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    if (numsSize == 0) {
        return 0;
    }
    int **ret = (int **)malloc(sizeof(int *) * (numsSize + 1) * 6);
    *returnSize = 0;
    short left = 0;
    short right = numsSize - 1;;
    int target = 0;
    
    *returnColumnSizes = malloc(sizeof(int) * (numsSize + 1) * 6);
    qsort(nums, numsSize, sizeof(int), comp);
    ret[*returnSize] = malloc(sizeof(int) * 3);

    while (left + 1 < right) {
        int i = left + 1;
        int j = right;
        target = 0 - nums[left];
        while (i < j) {
            if (nums[i] + nums[j] < target) {
                i++;
            } else if (nums[i] + nums[j] > target) {
                j--;
            } else {
                ret[*returnSize][0] = nums[left];
                ret[*returnSize][1] = nums[i];
                ret[*returnSize][2] = nums[j];
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;
                ret[*returnSize] = malloc(sizeof(int) * 3);

                while(nums[i] == nums[++i] && i < j) {}
                while(nums[j] == nums[--j] && i < j) {}
            }
        }
        while(nums[left] == nums[++left] && left + 1 < right) {}
    }
    
    return ret;
}

