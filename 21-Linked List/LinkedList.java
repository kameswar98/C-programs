import java.io.*;
import java.util.*;

class Node{
	public int data;
	public Node next;
	
	//display data of that node 
          public void dispnodedata(){
	   System.out.println(data);
	  }

}

class LinkedList{
	public Node head=null;

	//Insertion at end
	 public void insertEnd(int data){
	  Node newNode=new Node();
	  newNode.data=data;
	  newNode.next=null;

          if(head==null){	   
	   head=newNode;
	  }
	  else{
	   Node cNode=head;
	
	   while(cNode.next!=null)
	     cNode=cNode.next;
	  
	  cNode.next=newNode;
	  }
	System.out.println("Sucessfully Inserted!");
	 }



	//insertion at start
	public void insertStart(int data){
	 Node newNode = new Node();
	 newNode.data=data;
	 newNode.next=head;
	 head=newNode;
	 System.out.println("Sucessfully Inserted! at Starting !");
	}


	
	//insert at position
	public void insertAt(int index,int data){
	 Node node=new Node();
	 node.data=data;
	 node.next=null;
	 if(index==0){
	  insertStart(data);
	  }
	else{
	 Node n=head;
	 for(int i=0;i<index-1;i++){
	  n=n.next;
	}	 
	node.next=n.next;
	n.next=node;
}

	}
	




	//delete at
	public void deleteAt(int index){

	if(index==0){
	 head=head.next;	 
	}
	else{
	 Node n=head;
	 Node n1=null;
	 for(int i=0;i<index-1;i++){
	  if(n==null){
		System.out.println("not avalid position");
		
	 }
	  
	  n=n.next;
	
	}
	
	n1=n.next;
	n.next=n1.next;
	n1=null;	
 	}



}




	//display linked list
	public void display(){
	 if(head==null){
	  System.out.println("LinkedList is Empty!");
	  }
	 else{
	  
	  System.out.println("All Elements in Linked List are :");
	  Node cNode=head;
	  
 	  while(cNode!=null){
	   System.out.println(cNode.data);
	   cNode=cNode.next;
	   }
	  }
	}

	//delete node
	public void deleteEnd(){
	  Node nnext=head;
	  Node nprev=head;
	  while(nnext.next!=null){
	   nprev=nnext;
	   nnext=nnext.next;
	  }
	 nnext=null;
	 nprev.next=null;
	}
	
	public void deleteStart(){
	 head=head.next;
	}




	  
	public static void main(String args[]){

	 LinkedList s=new LinkedList();
	int x;
	int y,z;
	
	do{

	 System.out.println("Enter Your Choice:");
 	 System.out.println("1.Insert At Start \n 2.Insert At End \n 3.Insert At position\n  4.Delete At Start \n5.Delete At End \n 6.Delete At position\n 7.Dispaly Stack");

 	 System.out.println("Any Other key to exit ");
	 Scanner scan=new Scanner(System.in);

	 x=scan.nextInt();

	 switch(x){

	  case 1: System.out.println("Enter your Value :");
		  y=scan.nextInt();
		  s.insertStart(y);
		  break;

	  case 2: System.out.println("Enter your Value :");
		  y=scan.nextInt();
		  s.insertEnd(y);
		  break;
	  
	  case 3: System.out.println("Enter your value :");
		  y=scan.nextInt();
		  System.out.println("Enter the position :");
		  z=scan.nextInt();
		  s.insertAt(z,y);
		  break;

	  case 4: s.deleteStart();
		  System.out.println("Item Deleted at Starting");
		  break;

	  case 5: System.out.println("Item Deleted at End");
		  s.deleteEnd();
		  break;
	  
	  case 6: System.out.println("Enter the position :");
		  z=scan.nextInt();
		  s.deleteAt(z);
		  System.out.println("Item Deleted at"+z+" position");
		  break;	 

	  case 7:s.display();
		 break;

	  default: System.out.println("Thank You !");

 	  }
          System.out.println();
	 }while(x<=7);
	} 






}