//Super Keyword
class employee {
    int wt = 8;
    }
    class clerk extends employee {
    int wt = 10; //work time
    void display() {
    System.out.println(super.wt); //will print work time of clerk
    }
    public static void main(String args[])
    {
    clerk c = new clerk();
    c.display();
    }
    }
 //Final Keyword
 import java.util.*;
import java.lang.*;
import java.io.*;
class stud {
final int val;
stud() {
val = 60;
}
void method() {
System.out.println(val);
}
public static void main(String args[]) {
stud S1 = new stud();
S1.method();
}
}
