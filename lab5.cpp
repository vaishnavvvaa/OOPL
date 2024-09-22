package vehiclevk;

import java.util.*;

interface vehicle{

	void gear_change(int a );

	void speed_up();

	void apply_brakes();

	void display();

	

}



class bicycle implements vehicle

{

	int gear, speed;

	bicycle() // dconstuctor

	{

		System.out.print("\n bicycle started successfully  \n");

		gear =1;

		speed=10;

	}

	public void gear_change(int gearex)

	{

		if(gearex<7 && gearex>0)

		{

			gear=gearex;

			System.out.print("\t gear changed successfully \n\t current gear is"+gear);

			

		}

		else

			System.out.println("gear is out of range \n");

		

	}

	public void speed_up()

	{

		if((speed+5)<50)  //max speed 50

			

		{

			speed+=5;

			System.out.println("\n\t bicycles speed increased \n\t current speed is"+speed);

		}

		else

			System.out.println("speed cannot be increased above 50 kmhr \n");

		

	}

	public void apply_brakes()

	{

		Scanner sc=new Scanner(System.in);

		int x;

		System.out.println("1.DECREASE SPEED \n 2.STOP BICYCLE \n");

		x=sc.nextInt();

		

		if(x==1)

			     if((speed+1)>0)

			     {

			    	 speed-=5;

			    	 System.out.println("speed reducuced successfuly \n\t current speed is"+speed+"kmhr \n");

			     }

			     else {

			    	 speed=0;

			    	 gear=0;

			    	 System.out.println("Bicycle stopped successfully");

			     }

		if(x==2)

		{

			speed=0;

			gear=0;

			System.out.println("bicycle stopped successfully \n");

		}

			     }

	public void display()

	{

		System.out.println("your bicycle's speed is"+speed+"kmhr and gear is"+gear);

		

	}

	

			     }

class car implements vehicle

{

	int gear, speed;

	car()

	{

		System.out.println("\t car started successfully \n");

		gear=1;

		speed=10;

	}

	public void gear_change(int gearex)

	{

		if(gearex<7 && gearex>0)

		{

			gear=gearex;

			System.out.print("\t gear changed successfully \n\t current gear is"+gear);

			

		}

		else

			System.out.println("gear is out of range \n");

		

	}

	public void speed_up()

	{

		if((speed+20)<150)  //max speed 150

			

		{

			speed+=20;

			System.out.println("\n\t car speed increased \n\t current speed is"+speed);

		}

		else

			System.out.println("speed cannot be increased above 150 kmhr \n");

		

	}

	public void apply_brakes()

	{

		Scanner sc=new Scanner(System.in);

		int x;

		System.out.println("1.DECREASE SPEED \n 2.STOP BICYCLE \n");

		x=sc.nextInt();

		

		if(x==1)

			     if((speed-20)>0)

			     {

			    	 speed-=20;

			    	 System.out.println("speed reducuced successfuly \n\t current speed is"+speed+"kmhr \n");

			     }

			     else {

			    	 speed=0;

			    	 gear=0;

			    	 System.out.println("car stopped successfully");

			     }

		if(x==2)

		{

			speed=0;

			gear=0;

			System.out.println("car stopped successfully \n");

		}

			     }

	public void display()

	{

		System.out.println("your car's speed is"+speed+"kmhr and gear is"+gear);

		

	}

	}

class Bike implements vehicle

{

	int gear, speed;

	Bike()

	{

		System.out.println("\t bike started successfully \n");

		gear=1;

		speed=10;

	}

	public void gear_change(int gearex)

	{

		if(gearex<6 && gearex>0)

		{

			gear=gearex;

			System.out.print("\t gear changed successfully \n\t current gear is"+gear);

			

		}

		else

			System.out.println("gear is out of range \n");

		

	}

	public void speed_up()

	{

		if((speed+20)<100)  //max speed 150

			

		{

			speed+=20;

			System.out.println("\n\t bike speed increased \n\t current speed is"+speed);

		}

		else

			System.out.println("speed cannot be increased above 100 kmhr \n");

		

	}

	public void apply_brakes()

	{

		Scanner sc=new Scanner(System.in);

		int x;

		System.out.println("1.DECREASE SPEED \n 2.STOP BICYCLE \n");

		x=sc.nextInt();

		

		if(x==1)

			     if((speed-20)>0)

			     {

			    	 speed-=20;

			    	 System.out.println("speed reducuced successfuly \n\t current speed is"+speed+"kmhr \n");

			     }

			     else {

			    	 speed=0;

			    	 gear=0;

			    	 System.out.println("bike stopped successfully");

			     }

		if(x==2)

		{

			speed=0;

			gear=0;

			System.out.println("bike stopped successfully \n");

		}

			     }

	public void display()

	{

		System.out.println("your bike's speed is"+speed+"kmhr and gear is"+gear);

		

	}

	}





public class Main {

	

	public static void main(String ar[])

	{

	Scanner sc=new Scanner(System.in);

	vehicle v=null;

	System.out.println("==========================================");

	int y;

	bb:

		do {

			

		

	System.out.println("select cehicle \n\t 1.Bicycle \n\t 2.Car \n\t 3.Bike \n\t 4.Exit \n choice::");

	y=sc.nextInt();

	System.out.println("==========================================================");

	

	if(y==1)

		v=new bicycle();

	else if(y==2)

		v=new car();

	else if(y==3)

		v=new Bike();

	else if(y==4)

		break bb;

	

	else

		System.out.println("invalid input");

	

	System.out.println("==========================================================");

	

	

		if(0<y&&y<4) {

			aa:		//label for inner do while loop

				do {

					System.out.print(" \tPress 1. Speed Up \n\tPress 2. Change gear \n\tPress 3. Apply Brakes  "

						+ "\n\tPress 4. Display Vehicle Status \n\tPress 5. change Vehicle /Exit \nChoice::");

					int z=sc.nextInt();  		

					System.out.println("======================================================================");

				switch(z)

				{

				case 1:

					v.speed_up();

					System.out.println("======================================================================");

					break;

				case 2:

					System.out.print("which gear you want?   ");

					int a=sc.nextInt();

					v.gear_change(a);

					System.out.println("======================================================================");

					break;

					

				case 3:

					v.apply_brakes();

					System.out.println("======================================================================");

					break;

				case 4:

					v.display();

					System.out.println("======================================================================");

					break;

				case 5:

					break aa;		//label break

				default:

						System.out.println("Invalid Input");

					

				}

				}while(true);

			}

				

			

			

		}while(y!=4); //loop break when input y=4

	}



}
