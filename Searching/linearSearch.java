import java.util.Scanner;
public class linearSearch{

public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the size of element");
    int n=sc.nextInt();
    boolean b=false;
    int ar[]=new int[n];
    for(int i=0;i<n;i++){
        ar[i]=sc.nextInt();
    } 
    System.out.println("enter the number you want to search");
    int key=sc.nextInt();
    for(int i=0;i<n;i++){
        if(key==ar[i]){
            System.out.println("the number is present");
            b=true;
            break;
        }
    }
    if(b==false){
        System.out.println("number is Not present in array ");
    }

    
}

}