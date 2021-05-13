import java.util.Scanner;
public class Reverse
{
public static void main(String args[])
{
int r=0;
System.out.println("Please enter number:");
Scanner s=new Scanner(System.in);
int n=s.nextInt();
s.close();
while (n!=0)
{
int d=n%10;
r=r*10+d;
n=n/10;
}
System.out.println("Reverse of number is:"+r);}}