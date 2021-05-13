class Animal{
void eat(){System.out.println(&quot;eating...&quot;);}
}
class Dog extends Animal{
void bark(){System.out.println(&quot;barking...&quot;);}
}
class TestInheritance{
public static void main(String args[]){
Dog d=new Dog();
d.bark();
d.eat();
}}
