
public class quickshort {
    public static int[] Quickshort(int[] arr, int start, int end) {
        if (end - start >= 1) {
            int new_end = partion(arr, start, end);
            Quickshort(arr, start, new_end);
            Quickshort(arr, new_end + 1, end);
        }

        return arr;
    }

    public static int partion(int[] arr, int lb, int ub) {
        int start = lb;
        int end = ub;
        int pivot = arr[start];
        while (start < end) {
            while (arr[start] <= pivot && start < ub) {
                start++;
            }
            while (arr[end] > pivot && lb <= end) {
                end--;
            }
            if (start < end) {
                arr[start] = arr[end] + arr[start];
                arr[end] = arr[start] - arr[end];
                arr[start] = arr[start] - arr[end];

            }

        }
        if (end != lb) {
            arr[lb] = arr[end] ^ arr[lb];
            arr[end] = arr[lb] ^ arr[end];
            arr[lb] = arr[lb] ^ arr[end];
        }
        return end;
    }

    public static void main(String[] arg) {
        int[] a = { 1, 4, 2, 6, 8, 5, 9, 3 };
        a = Quickshort(a, 0, a.length - 1);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }

}
