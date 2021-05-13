import java.util.Scanner;
public class HelloWorld{
public static void main(String[]args){
int i,f =1;
System.out.println(“Enter the number to obtain its factorial”);
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
for(i=0; i<=n; i++){
f=f*i;
}
System.out.println(“The factorial of above number is: + f + “.”);
}
}