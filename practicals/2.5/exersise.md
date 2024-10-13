# Task: Car Rental Management System

**Objective:**  
You are tasked with building a simple car rental management system that tracks the information of multiple cars in a fleet. Each car has the following attributes:
- `brand` (string)
- `model` (string)
- `year` (int)
- `rental_price_per_day` (float)
- `is_available` (bool) – to track whether the car is currently available for rent

The system should perform the following operations:

1. **Input Data:**
   - Read data for `n` cars (where `n` is provided by the user).
   - For each car, input the `brand`, `model`, `year`, and `rental_price_per_day`. All cars are initially marked as `available`.
   - You can predefine list of 5 cars or allow to user to input them from `std::cin`.

2. **Display Available Cars:**
   - Write a function to display the details of all cars that are currently available for rent.

3. **Rent a Car:**
   - Write a function that allows a user to "rent" a car by entering the `brand` and `model`. If the car is available, mark it as `not available`. If not available, notify the user.

4. **Return a Car:**
   - Write a function that allows a user to return a rented car by entering the `brand` and `model`. Mark it as `available`.

5. **Find the Most Expensive Car:**
   - Write a function to find and display the car with the highest `rental_price_per_day` that is currently available for rent.

---

## Specifications & Requirements:

1. Create a struct named `Car` with the following members:
```cpp
   struct Car {
       std::string brand;
       std::string model;
       int year;
       float rental_price_per_day;
       bool is_available;
   };
```

2. Use an array of `Car` structs to store the data of `n` cars.

3. Functions:
   - `void input_cars(Car cars[], int n);`
     - Takes an array of cars and the number of cars `n` as input and fills in the data for each car.
   - `void display_available_cars(const Car cars[], int n);`
     - Displays the details of all available cars.
   - `void rent_car(Car cars[], int n, const std::string &brand, const std::string &model);`
     - Allows the user to rent a car by marking it as not available if it is available.
   - `void return_car(Car cars[], int n, const std::string &brand, const std::string &model);`
     - Allows the user to return a car, making it available again.
   - `void find_most_expensive_available_car(const Car cars[], int n);`
     - Finds and displays the most expensive available car for rent.

---

## Sample Input/Output:

**Input:**

```yaml
Enter the number of cars: 3

Enter details for car 1:
Brand: Toyota
Model: Corolla
Year: 2018
Rental Price per Day: 40

Enter details for car 2:
Brand: BMW
Model: X5
Year: 2020
Rental Price per Day: 120

Enter details for car 3:
Brand: Honda
Model: Civic
Year: 2019
Rental Price per Day: 50
```

**Output (after user rents a car):**

```yaml
Available Cars:
Brand: Toyota, Model: Corolla, Year: 2018, Rental Price: $40/day
Brand: BMW, Model: X5, Year: 2020, Rental Price: $120/day
Brand: Honda, Model: Civic, Year: 2019, Rental Price: $50/day

Renting the car: Honda Civic
Success! You have rented Honda Civic.

Available Cars after renting:
Brand: Toyota, Model: Corolla, Year: 2018, Rental Price: $40/day
Brand: BMW, Model: X5, Year: 2020, Rental Price: $120/day

The most expensive available car is:
Brand: BMW, Model: X5, Year: 2020, Rental Price: $120/day
```

## Challenge
- Use loops and conditions to allow multiple rental and return transactions without terminating the program.
