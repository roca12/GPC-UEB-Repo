/*
 * Autor: Juan Andres Garcia
 * Problema: Queue at the School
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/266/B
 **/

import java.util.Scanner;

public class QSchool {

	static class Node {
		char coso;
		Node next;

		public Node(char myCoso) {
			this.coso = myCoso;
			this.next = null;
		}
	}

	static class LinkedList {
		Node head;

		public LinkedList() {
			this.head = null;
		}

		public void insert(char myCoso) {
			Node newNode = new Node(myCoso);

			if (head == null) {
				head = newNode;
			} else {
				Node temp = head;

				while (temp.next != null) {
					temp = temp.next;
				}

				temp.next = newNode;
			}
		}

		public void traverse() {
			Node temp = head;

			while (temp != null) {
				System.out.print(temp.coso);
				temp = temp.next;
			}
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		LinkedList cola = new LinkedList();

		int kids = sc.nextInt();
		int vueltas = sc.nextInt();
		String cadena = sc.next();

		char[] caracteres = cadena.toCharArray();

		for (int i = 0; i < kids; i++) {
			cola.insert(caracteres[i]);
		}

		for (int i = 0; i < vueltas; i++) {
			Node temp = cola.head;

			while (temp != null && temp.next != null) {
				if (temp.coso == 'B' && temp.next.coso == 'G') {
					temp.coso = 'G';
					temp.next.coso = 'B';

					temp = temp.next.next;
				} else {
					temp = temp.next;
				}
			}
		}

		cola.traverse();
	}
}
