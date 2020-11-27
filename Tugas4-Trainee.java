package pbo_3_inherite;

public class Trainee extends Member 
    {
    private int suwiTraining;
    
    public Trainee(String jeneng, int age, int suwiTraining) 
    {
        super(jeneng, age);
        this.suwiTraining = suwiTraining;
    }
    @Override
    public void display() 
    {
        super.display();
        System.out.println("Waktu Training (month) : " + suwiTraining);
    }
}
