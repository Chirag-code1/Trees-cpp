import java.util.*;
/* class Node {
  int data; // data used as key value
  Node leftChild;
  Node rightChild;
  public Node()  {
    data=0;  }
  public Node(int d)  {
    data=d;  }
 } Above class is declared for use. */
class QueueNode{
  Node node;
  int hp;
  public QueueNode(Node node,int hp){
    this.node=node;
    this.hp=hp;
  }
}
class Result {
  static void printTopView(Node root) {
    if(root==null)
      return;
    Queue<QueueNode> q = new LinkedList<QueueNode>();  
    Map<Integer,Integer> map = new TreeMap<>();
    q.add(new QueueNode(root,0));
    while(!q.isEmpty()){
      QueueNode curr = q.remove();
      if(!map.containsKey(curr.hp))
        map.put(curr.hp,curr.node.data);
      if(curr.node.leftChild != null)
        q.add(new QueueNode(curr.node.leftChild, curr.hp-1));
      if(curr.node.rightChild != null)
        q.add(new QueueNode(curr.node.rightChild, curr.hp+1));
    }
    for(Map.Entry<Integer,Integer> k : map.entrySet()){
      System.out.print(k.getValue()+" ");
    }
  }
} //revised
