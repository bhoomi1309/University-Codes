public class HeapSort{
    public static void heapSort(int[] arr){
        int n=arr.length;
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }
        for(int i=n-1;i>=0;i--){
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
            heapify(arr,i,0);
        }
    }
    private static void heapify(int[] arr,int n,int i){
        int max=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && arr[left]>arr[max]){
            max=left;
        }
        if(right<n && arr[right]>arr[max]){
            max=right;
        }
        if(max!=i){
            int swap=arr[i];
            arr[i]=arr[max];
            arr[max]=swap;
            heapify(arr,n,max);
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
		System.out.println("Radix Sort");
		System.out.print("Enter size of array: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<n;i++){
			System.out.print("arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int i:arr){
            System.out.print(i + " ");
        }
		heapSort(arr);
		System.out.print("\nSorted Array: ");
        for(int i:arr){
            System.out.print(i + " ");
        }
    }
}

