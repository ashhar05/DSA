class stud
{
    int roll;
    String name;
    String branch;
    int uni;
    stud(int r, String n, String b, int nn)
        {
        this.roll=r;
        this.uni=nn;
        this.name=n;
        this.branch=b;
        System.out.println("\tStudent Number:-"+uni);
        System.out.println("Roll No-"+roll);
        System.out.println("Name-"+name);
        System.out.println("Branch-"+branch);
        System.out.println("---------------------------");
        }
    public static void main(String args[])
    {
        System.out.println("---------------------------");
        stud s1=new stud(232323, "Ashhar Raheem", "Automobile", 1);
        stud s2= new stud(343434, "Ash", "CSE", 2);
    }
}//23july