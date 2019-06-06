import java.util.*;
import java.io.*;
import java.util.*;

class MyQueue{
	private int maxsize;
	public int queuearr[];
	public int front=0;
	public int rear=-1;
	
	MyQueue(int s){
         front=0;
	 rear=-1;
	 maxsize=s;
	 queuearr=new int[maxsize];
	}
	
	public void add(int val){
	 if(maxsize ==rear){
	  System.out.println("Queue is full");
	 }
	 else{
	  queuearr[++rear]=val;
	 } 
	}
	
	public void remove(){
	 if(rear==-1||front>rear){
	  System.out.println("Queue is Empty");
	 }
	 else{
	  if(front<=rear){
		
	   
	   System.out.println(queuearr[front]);
	   front++;
	  }
	}
	}

	public void disp(){
	 if(rear==-1||front>rear){
	  System.out.println("Queue is Empty");
	 }

	 else{
	  int i;
	  int x=front;
	  if(x==-1){
	   x=x++;}
	  for(i=x;i<=rear;i++)
	    System.out.println(queuearr[i]);	
	 }
 	}


	//Main program
	public static void main(String[] args){
	
	MyQueue q=new MyQueue(10);
	
	int x;
	int y;
	System.out.println("*********************Queue Implementation in Java***************************");
	
	do{
	System.out.println("1.Add 2.Remove 3.Display Queue");
	System.out.println("Enter Your Choice:");
 	System.out.println("Any Other key to exit...");
	 
	 Scanner sca=new Scanner(System.in);

	 x=sca.nextInt();

	 switch(x){

	  case 1: System.out.println("Enter your Value to add :");
		  y=sca.nextInt();
		  q.add(y);
		  break;	 

	  case 2:q.remove();
		 break;

	  case 3:q.disp();
		 break;

	  default: System.out.println("Thank You !");

 	  }
          System.out.println();
	 }while(x<=3);

    }	













}