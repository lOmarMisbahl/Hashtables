import java.util.*;
public class MyHashtable {
    private  LinkedList<Integer>[] array;
    public MyHashtable(LinkedList<Integer>[] array) {
        this.array = array;
        for (int i = 0 ; i < 13 ; i++)
        if (array[i] == null) {
            array[i] = new LinkedList<>();
        }
    }
    private int HashFunction1(int input) {
        return input % 13;
    }
    private void insert(int input) {
        this.array[HashFunction1(input)].add(input);
    }
    public static void main(String args[]) {
        LinkedList<Integer>[] array = new LinkedList[13] ;
        MyHashtable hashtable = new MyHashtable(array);
        hashtable.insert(18);
        hashtable.insert(41);
        hashtable.insert(22);
        hashtable.insert(44);
        for (int i = 0 ; i < 13 ; i++)
        System.out.println(hashtable.array[i]);
    }
}
