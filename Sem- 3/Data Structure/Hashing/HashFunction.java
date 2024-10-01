public class HashFunction{
	public static void hash(int[] hashTable, int n){
		int i=(n%18)+2;
        while(hashTable[i] != 0){
            i=(i+1)%20;
        }
        hashTable[i]=n;	
    }
	public static void main(String[] args){
		int[] arr=new int[]{5,16,2,9,12,15,4,3,1,19,29,13,15,6,25};
		int[] hashTable=new int[20];
		for(int i=0;i<arr.length;i++){
			hash(hashTable,arr[i]);
		}
		for(int i=0;i<20;i++){
			System.out.print(hashTable[i]+" ");
		}
	}
}