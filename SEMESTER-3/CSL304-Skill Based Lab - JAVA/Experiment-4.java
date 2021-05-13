class Student
{
public static void main(String args[])
{
TestStudent t1=new TestStudent();
TestStudent t2=new TestStudent();
t1.Name();
t1.insert(100);
t2.Information();
t2.Nam();
t2.insert(101);
t2.information();
}
}
class TestStudent
{
Sting Name;
int Roll_NO;
void Name(){
System.out.println(“Name:- Vivek Hotti”);
}
Void Name()
{
System.out.println(“\n Name:- Vik”);
}
Void insert(int R)
{
Roll_NO=R;
}
Void information()
{
System.out.println(“The roll no is” + “ “ + Roll_NO);
}
}