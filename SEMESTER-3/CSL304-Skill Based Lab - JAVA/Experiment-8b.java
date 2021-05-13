class Bank{
    public int rateofinterest()
    { int R=10000/(200*3);
    System.out.println("Therefore, Rate of interest is :" + R );
    return R;
    }
    }
    class SBI extends Bank{
    public void Time()
    {
    System.out.println("Amount of time is: 3 years");
    }
    public void InterestRate()
    {
    System.out.println("Interest amount is: 10000");
    }
    public void Principal()
    {
    System.out.println("Principal Amount is:20000 ");
    UCOE/COMPS /3rd sem/ SBL(JAVA)/ Lab Manual
    Universal College Of Engineering, Vasai(E) 21
    }
    }
    class Interest extends SBI{
    public static void main(String args[])
    {
    Interest obj=new Interest();
    obj.Time();
    obj.InterestRate();
    obj.Principal();
    obj.rateofinterest();
    }
    }