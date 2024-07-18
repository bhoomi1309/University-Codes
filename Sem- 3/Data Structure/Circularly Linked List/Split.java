import java.util.Scanner;

class Circular {
	class Node {
		int data;
		Node link;

		public Node(int data) {
			this.data = data;
			this.link = null;
		}
	}

	public Node first = null;
	public Node last = null;

	public void insertFirst(int data) {
		Node newNode = new Node(data);
		if (first == null) {
			first = last = newNode;
			last.link = first;
			System.out.println("Inserted Successfully");
			return;
		}
		newNode.link = first;
		last.link = newNode;
		first = newNode;
		System.out.println("Inserted Successfully");
	}

	public void insertLast(int data) {
		Node newNode = new Node(data);
		if (first == null) {
			first = last = newNode;
			last.link = first;
			return;
		}
		last.link = newNode;
		newNode.link = first;
		last = newNode;
	}

	public void display() {
		Node temp = first;
		if (temp == null) {
			System.out.print("Empty");
			return;
		}
		do {
			System.out.print(temp.data + " ");
			temp = temp.link;
		} while (temp != first);
		System.out.println();
	}

	public void split(int count) {
		if (count == 0) {
			System.out.println("Empty List");
			return;
		}
		Node temp = first;
		int k = 0;
		if (count % 2 == 0) {
			while (k < count / 2 - 1) {
				temp = temp.link;
				k++;
			}
		} else {
			while (k < count / 2) {
				temp = temp.link;
				k++;
			}
		}
		Node temp2 = temp.link;
		temp.link = first;
		Circular n2 = new Circular();
		while (temp2 != last.link) {
			n2.insertLast(temp2.data);
			temp2 = temp2.link;
		}
		System.out.print("First Half: ");
		this.display();
		System.out.print("Second Half: ");
		n2.display();
	}
}

public class Split {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int count = 0;
		int a;
		System.out.println("Split Circularly Linked List into two halves");
		Circular n = new Circular();
		do {
			System.out.print("Enter a number to insert or -1 to exit: ");
			a = sc.nextInt();
			if (a == -1) {
				break;
			}
			count++;
			n.insertFirst(a);
		} while (a != -1);
		System.out.print("List: ");
		n.display();
		System.out.println();
		n.split(count);
		sc.close();
	}
}