students = [];

def addStudent():
    name=input("Enter your name: ");
    age=int(input("Enter your age: "));
    marks=list(map(float, input("Enter your marks separated by space: ").split()));

    student={
        'name' : name,
        'age' : age,
        'marks' : marks
    }
    
    students.append(student);
    print(f"{student} added successfully\n");

def displayStudents():
    for i in students:
        print("-------------------------------")
        print(f"Student name = {i['name']}");
        print(f"Student age = {i['age']}");
        print(f"Student marks = {i['marks']}");
        print("-------------------------------")
print("\n");    

def main():
    while True:
        print("----- Student Management System -----")
        print("1. Add Student")
        print("2. Display All Students")
        print("3. Exit")
        choice = input("Enter your choice(1-3): ")
        
        if choice=='1':
            addStudent();
        elif choice=='2':
            displayStudents();
        else:
            print("Exiting...");
            break;


if __name__ == "__main__":
    main()