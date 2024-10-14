package BinarySearch;
import java.util.*;
public class BinarySearch {
    
    // Binary Search Function
    public static int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;  // To avoid overflow
            
            // Check if target is present at mid
            if (arr[mid] == target) {
                return mid;
            }
            
            // If target is greater, ignore the left half
            if (arr[mid] < target) {
                left = mid + 1;
            }
            // If target is smaller, ignore the right half
            else {
                right = mid - 1;
            }
        }
        
        // If we reach here, the element is not present
        return -1;
    }
    
    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 10, 40};
        int target = 10;
        
        // The array must be sorted for binary search
        Arrays.sort(arr);
        
        int result = binarySearch(arr, target);
        
        if (result == -1) {
            System.out.println("Element not present in array");
        } else {
            System.out.println("Element found at index " + result);
        }
    }
}
