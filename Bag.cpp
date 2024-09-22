package package1;
import java.util.*;

public class Bag 
{
    private String color;
    private int weight;
    private static int total_obj;
    private static int total_weight;

    public Bag() 
    {
        color = "red";
        weight = 30;
        total_obj++;
        total_weight += weight;
    }

    public Bag(String color, int weight) 
    {
        this.color = color;
        this.weight = weight;
        total_obj++;
        total_weight += weight;
    }

    public Bag(String color) 
    {
        this.color = color;
        this.weight = 20;
        total_obj++;
        total_weight += weight;
    }

    public Bag(int weight) 
    {
        this.color = "blue";
        this.weight = weight;
        total_obj++;
        total_weight += weight;
    }

    public void display(int i) 
    {
        System.out.println((i + 1) + " " + color + " " + weight);
    }

    public static void show() 
    {
        System.out.println("Total objects are: " + total_obj);
        System.out.println("Total weight is: " + total_weight);
    }

    public static void main(String[] args) 
    {
        Bag[] b = new Bag[20];
        Scanner sc = new Scanner(System.in);
        int n = 0;
        
        while (true) 
        {
            System.out.println("Enter \n1 for Add \n2 for Display \n3 for Exit");
            int x = sc.nextInt();
            
            if (x == 3) 
            {
                break;
            }
            
            switch (x) 
            {
                case 1:
                    System.out.println("Enter \n1 for Add Default \n2 for Add User \n3 for Add Color Default \n4 for Add Weight Default \n5 for Exit");
                    int y = sc.nextInt();
                    
                    if (y == 5) 
                    {
                        break;
                    }
                    
                    switch (y) 
                    {
                        case 1:
                            b[n] = new Bag();
                            n++;
                            break;
                        case 2:
                            b[n] = new Bag("green", 50);
                            n++;
                            break;
                        case 3:
                            b[n] = new Bag("blue");
                            n++;
                            break;
                        case 4:
                            b[n] = new Bag(60);
                            n++;
                            break;
                        default:
                            System.out.println("Invalid option.");
                            break;
                    }
                    break;
                case 2:
                    for (int i = 0; i < n; i++) 
                    {
                        b[i].display(i);
                    }
                    Bag.show();
                    break;
                    
                default:
                    System.out.println("Invalid option.");
                    break;
            }
        }
        
    }
}
