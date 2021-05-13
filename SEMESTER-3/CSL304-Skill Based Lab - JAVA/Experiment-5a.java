class Sum
{
public int sum(int x, int y)
{
System.out.println(x + y);
}
public int sum(int x, int y, int z)
{
System.out.println(x + y + z);
}
public double sum(double x, double y)
{
UCOE/COMPS /3rd sem/ SBL(JAVA)/ Lab Manual
Universal College Of Engineering, Vasai(E) 13
System.out.println(x + y);
}
}
class Overloading
{
public static void main(String args[])
{
Sum s = new Sum();
s.sum(10, 20);
s.sum(10, 20, 30);
s.sum(10.5, 20.5);
}
}