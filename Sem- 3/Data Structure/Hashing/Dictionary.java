import java.util.LinkedList;

class Entry<K,V>{
    K key;
    V value;
    public Entry(K key,V value){
        this.key = key;
        this.value = value;
    }
}

class HashTable<K, V>{
    private final int n=10;
    private LinkedList<Entry<K,V>>[] table;

    public HashTable() {
        table=new LinkedList[n];
        for(int i=0;i<n;i++){
            table[i]=new LinkedList<>();
        }
    }
    public int getHash(K key){
        return Math.abs(key.hashCode())%n;
    }
    public void put(K key,V value){
        int i=getHash(key);
        LinkedList<Entry<K, V>> bucket=table[i];
        for(Entry<K, V> entry:bucket){
            if(entry.key.equals(key)){
                entry.value=value;
                return;
            }
        }
        bucket.add(new Entry<>(key,value));
    }
    public V get(K key){
        int i=getHash(key);
        LinkedList<Entry<K, V>> bucket=table[i];
        for(Entry<K, V> entry:bucket){
            if(entry.key.equals(key)){
                return entry.value;
            }
        }
        return null;
    }
    public void display(){
        for(int i=0;i<n;i++){
            System.out.print("Bucket " +i+ ": ");
            for(Entry<K, V> entry:table[i]){
                System.out.print("{" +entry.key+ "=" +entry.value+ "} ");
            }
            System.out.println();
        }
    }
}

public class Dictionary{
    public static void main(String[] args) {
        HashTable<String, Integer> dictionary = new HashTable<>();

        dictionary.put("Apple", 50);
        dictionary.put("Banana", 30);
        dictionary.put("Orange", 20);
        dictionary.put("Mango", 40);
        dictionary.put("Guava", 20);
        dictionary.put("Litchi", 50);
        dictionary.put("Watermelon", 10);
        dictionary.put("Chiku", 20);
        dictionary.put("Strawberry", 30);
        dictionary.put("Kiwi", 10);
        dictionary.put("Pineapple", 20);
        dictionary.put("Custard Apple", 40);
        dictionary.put("Tomato", 30);
        dictionary.put("Pomegranate", 20);
        dictionary.put("Dates", 20);
        dictionary.put("Peach", 10);
        dictionary.put("Dragon Fruit", 30);
        dictionary.put("Jamun", 30);
        dictionary.put("Rasberry", 10);

        dictionary.display();

        System.out.println("Value for 'Apple': " + dictionary.get("Apple"));
        System.out.println("Value for 'Banana': " + dictionary.get("Banana"));
    }
}
