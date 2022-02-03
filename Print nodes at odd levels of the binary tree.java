import java.util.Queue;
class Result {
  static void printOdd(Node root) {
	if (root == null)
    	    return;
    	Queue<Node> q = new LinkedList<Node> ();
    	q.add(root);
    	boolean isOdd = true;
    	while (!q.isEmpty())
    	{
    		int nodeCount = q.size();
    		for (int i = 0; i < nodeCount; i++)
    		{
    			Node node = q.peek();
    			q.remove();
    			if (isOdd)
    			    System.out.print(node.data + " ");
    			if (node.leftChild != null)
    				q.add(node.leftChild);
              if (node.rightChild != null)
    				q.add(node.rightChild);
    		}
    		isOdd = !isOdd;
    	}
  }
} //revised.
