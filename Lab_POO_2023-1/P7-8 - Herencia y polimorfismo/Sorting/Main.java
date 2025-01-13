import java.util.Scanner;
import java.util.ArrayDeque;

public class Main {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        char order = stdin.next().charAt(0);

        if (stdin.hasNextInt()) {
            ArrayDeque<Integer> queue = new ArrayDeque<>(); 
            
            int temp = 0;
            while (stdin.hasNextInt()){
                temp = stdin.nextInt();
                queue.add(temp);
            }
            int size = queue.size();
            Integer arr[] = new Integer[size];
            for (int i = 0; i < size; i++) {
                arr[i] = queue.poll();
            }
            if (order == 'A')
                Sorting.selectionSort(arr);
            else
                Sorting.insertionSort(arr);
            for (int i = 0; i < size; i++)
                System.out.println(arr[i]);
        } else {
            ArrayDeque<String> queue = new ArrayDeque<>();
            String temp = "";
            while (stdin.hasNext()) {
                temp = stdin.next();
                queue.add(temp);
            }
            int size = queue.size();
            String[] arr = new String[size];
            for (int i = 0; i < size; i++) {
                arr[i] = queue.poll();
            }
            if (order == 'A')
                Sorting.selectionSort(arr);
            else
                Sorting.insertionSort(arr);
            for (int i = 0; i < size; i++)
                System.out.println(arr[i]);
        }
        stdin.close();
    }
}
