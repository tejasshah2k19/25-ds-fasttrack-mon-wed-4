 

import java.util.ArrayList;
import java.util.Scanner;

public class GraphDemo {

	public static void main(String[] args) {

		Scanner scr = new Scanner(System.in);

		System.out.println("How many vertext you have? ");
		int totalVertex = scr.nextInt();
		System.out.println("How many edges you have?");
		int totalEdges = scr.nextInt();

		Graph g = new Graph(totalVertex, totalEdges);

		for (int i = 1; i <= g.totalEdges; i++) {
			System.out.println("Enter Src - Dest");
			String s = scr.next();// A
			String d = scr.next(); // B
			g.addEdge(s, d);
		}

		String search = "A";

		System.out.println(search + " connected with : ");
		for (Edge e : g.edges) {
			if (e.src.equals(search)) {
				System.out.println(e.dest);
			}
		}

	}
}

class Graph {
	int totalVertex;
	int totalEdges;
	ArrayList<Edge> edges;

	public Graph(int totalVertex, int totalEdges) {
		this.totalVertex = totalVertex;
		this.totalEdges = totalEdges;
		this.edges = new ArrayList<Edge>(this.totalEdges * 2);
	}

	void addEdge(String s, String d) {
		Edge e = new Edge(s, d);
		Edge re = new Edge(d, s);

		edges.add(e);
		edges.add(re);
	}

	// DFS BFS

	// Prims Djks Kruskal

}

class Edge {

	String src;
	String dest;

	public Edge(String s, String d) {
		this.src = s;
		this.dest = d;
	}
}