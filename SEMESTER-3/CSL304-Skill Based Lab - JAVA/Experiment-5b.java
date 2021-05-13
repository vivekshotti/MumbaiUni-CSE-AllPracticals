Class StudentData
{
private int stuID;
private String stuName;
private int stuAge;
StudentData()
{
stuID = 100;
stuName = &quot;New Student&quot;;
stuAge = 18;
}
StudentData(int num1, String str, int
num2)
{
stuID = num1;
stuName = str;
stuAge = num2;
}
public int getStuID() {
return stuID;
}
public void setStuID(int stuID) {
this.stuID = stuID;
}
public String getStuName() {
return stuName;
}
public void setStuName(String stuName) {
UCOE/COMPS /3rd sem/ SBL(JAVA)/ Lab Manual
Universal College Of Engineering, Vasai(E) 15
this.stuName = stuName;
}
public int getStuAge() {
return stuAge;
}
public void setStuAge(int stuAge) {
this.stuAge = stuAge;
}
public static void main(String args[])
{
StudentData myobj = new StudentData();
System.out.println(&quot;Student Name is:
&quot;+myobj.getStuName());
System.out.println(&quot;Student Age is:
&quot;+myobj.getStuAge());
System.out.println(&quot;Student ID is:
&quot;+myobj.getStuID());
StudentData myobj2 = new
StudentData(555, &quot;Chaitanya&quot;, 25);
System.out.println(&quot;Student Name is:
&quot;+myobj2.getStuName());
System.out.println(&quot;Student Age is:
&quot;+myobj2.getStuAge());
System.out.println(&quot;Student ID is:
&quot;+myobj2.getStuID());
}
}