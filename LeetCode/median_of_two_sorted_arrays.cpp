// C++
// Problem Statement: https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    bool isMedianFinish(bool isEven, int numMedian) {
        return numMedian == 0 || (!isEven && numMedian == 1) || (isEven && numMedian == 2);
    }
    
    bool isMedian(int position, int totalSize, bool isEven) {
        return isEven ? (position == totalSize / 2 || position == (totalSize / 2) + 1) : position - 1 == totalSize / 2;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int nums1Size = nums1.size(), nums2Size = nums2.size();
        int totalSize = nums1Size + nums2Size;
        bool isEven = totalSize % 2 == 0;
        int numMedian = 0;
        double median = 0;
        
        int n1 = 0, n2 = 0, arrItem = 0;
        while(n1 < nums1Size && n2 < nums2Size) {
            if(nums1[n1] <= nums2[n2]) {
                arrItem = nums1[n1];
                n1++;
            } else if(nums1[n1] > nums2[n2]) {
                arrItem = nums2[n2];
                n2++;
            }
            
            if (isMedian(n1 + n2, totalSize, isEven)) {
                median += arrItem;
                numMedian++;
                if(isMedianFinish(isEven, numMedian)) {
                    return isEven ? median / 2.0 : median;
                }
            }
        }
        
        if(numMedian == 0) {
            if(n1 < nums1Size) n2++;
            if(n2 < nums2Size) n1++;
        }
        
        while(n1 < nums1Size) {
            if (isMedian(n1 + n2, totalSize, isEven)) {
                median += nums1[n1];
                numMedian++;
                if(isMedianFinish(isEven, numMedian)) {
                    return isEven ? median / 2.0 : median;
                }
            }
            n1++;
        }
        
        while(n2 < nums2Size) {
            if (isMedian(n1 + n2, totalSize, isEven)) {
                median += nums2[n2];
                numMedian++;
                if(isMedianFinish(isEven, numMedian)) {
                    return isEven ? median / 2.0 : median;
                }
            }
            n2++;
        }
        
        return median;
    }
};
