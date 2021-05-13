import java.util.Scanner;
class Figure
{
final int length = 5;
final int bredth = 4;
final void area()
{
int a = length * bredth;
System.out.println("Area:"+a);
}
}
class Rectangle extends Figure
{
final void rect()
{
System.out.println("This is rectangle");
}
}
final public class Final_Use extends Rectangle
{
public static void main(String[] args)
{

Final_Use obj = new Final_Use();
obj.rect();
obj.area();
}
}