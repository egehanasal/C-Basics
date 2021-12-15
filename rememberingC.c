#include <stdio.h>
#include <string.h>

void hello(); // Function prototype
void conversation()
{
    char name[25];
    printf("\nWhat is your name? ");
    //scanf("%s", &name); // you can't accept a sentence using scanf
    fgets(name, 25, stdin);
    printf("Your name is %s", name);

    int age;
    printf("How old are you? ");
    scanf("%d", &age);
    printf("You are %d years old\n" , age);

    if(age >= 18)
    {
        printf("You are not a child anymore..");
    }
    else if((0 < age) && (age < 18))
    {
        printf("You are a child");
    }
    else
    {
        printf("You are not born");
    }
}

int sometMaths(int a)
{
    return a*a;
}

int findMax(int a, int b)
{
    return (a > b) ? a : b; //ternary operator
}


typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

typedef struct
{
    char name[12];
    double GPA;
} Student;

void printAge(int *pAge)
{
    printf("You are %d years old", *pAge); //dereference
}

////////////////////////////////////////////////////////////////////
typedef struct node
{
    int value;
    struct node *next;
} node_t;

void printList(node_t *head)
{
    node_t *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    //printf("Hello world\n");
    //printf("Hello world");

    //int x; //decleration
    //x = 123; //initilization
    //int y = 321; //decleration + initialization

    // float -> 4 bytes, 6-7 digits
    // double -> 8 bytes, 15-16 digits

    //int age = 22;
    //float gpa = 3.05;
    //double doubleGpa = 3.05;
    //char grade = 'x'; // stores a single character
    //char name[] = "Ege"; // array of characters

    //printf("Age: %d\n", age);
    //printf("Gpa: %f\n", gpa);
    //printf("Gpa: %.2f\n", gpa); // .2f -> displays 2 int's after "."
    //printf("Gpa: %f\n", doubleGpa);
    //printf("Grade: %c\n", grade);
    //printf("Name: %s\n", name);

    //const int EGE = 53;
    //EGE = 4; // this line will throw an error since EGE is constant

    //conversation();

    //int x = sometMaths(5);
    //printf("\nSquare of 5 is: %d", x);
    

    //int max = findMax(3,4);
    //printf("\nMax: %d", max);
    //hello();

    //char string1[] = "Egehan";
    //char string2[] = "Asal";
    //char string3[] = "Computer";
    //strlwr(string1); //egehan
    //strupr(string2); //ASAL
    //printf("String1: %s\n", string1);
    //printf("String2: %s\n", string2);
    //strcpy(string1, string2); // copies string2 to string1
    //printf("String1: %s\n", string1);
    //strncpy(string2, string3, 1); // copy n characters of str3 to str2
    //printf("String3: %s\n", string2);
    //printf("String2: %s\n", string3);
    //char s1[] = "HElLOoo";
    //char s2[] = "heLLoOO";
    //printf("String1: %s\n", s1);
    //printf("String2: %s\n", s2);
    //int val = strcmp(s1, s2); // compare all characters
    //int val2 = strcmpi(s1, s2); // compare all characters (ignore case)
    //printf("Val: %d\n", val);
    //printf("Val2: %d\n", val2);
    //int len = strlen(s1);
    //printf("Length of s1: %d", len);
    //strset(s1, "X"); // sets all characters of a string to a given char
    //strnset(s1, "Y", 3); // sets first n characters of a string to a given char
    //strrev(s1); // reverses a string


    // for loop
 //   for(int i = 0; i < 4; i++)
 //   {
 //       printf("%d\n", i);
 //   }
 //   printf("\n");
 //   int a = 4;
 //   // while loop
 //   while(a > 0)
 //   {
 //       printf("%d\n", a);
 //       a--;
 //   }
 //   // do-while loop
 //   int b = 3;
 //   do
 //   {
 //       printf("omg\n");
 //       b--;
 //   }
 //   while(b>0);
 //   
 //   conversation();


    // 1D ARRAY
//    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
//    printf("%lf", prices[1]);
//    
//    double prices[5];
//    prices[0] = 5.0;
//    prices[1] = 10.0;
//    prices[2] = 15.0;
//    prices[3] = 20.0;
//    prices[4] = 25.0;
//
//    int lenPrices = sizeof(prices)/sizeof(double);
//    for(int i = 0; i < lenPrices; i++)
//    {
//        printf("%.1f\n", prices[i]);
//    }

    // 2D ARRAY
//    int numbers[2][3] = {
//                         {1,2,3}, 
//                         {4,5,6}
//                        }; // size doesn't have to be defined

//    int numbers[2][3];
//
//    numbers[0][0] = 1;
//    numbers[0][1] = 2;
//    numbers[0][2] = 3;
//    numbers[1][0] = 4;
//    numbers[1][1] = 5;
//    numbers[1][2] = 6;
//
//    int rows = sizeof(numbers)/(sizeof(numbers[0]));
//    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
//
//    for(int i = 0; i < rows; i++)
//    {
//        for(int j = 0; j < columns; j++)
//        {
//            printf("%d ", numbers[i][j]);
//        }
//        printf("\n");
//    }
//
//    numbers[0][0] = 6;
//    printf("%d", numbers[0][0]);

//    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
//
//    //cars[0] = "Tesla" // this line will throw an error. You can't modify like this
//    strcpy(cars[0], "Tesla");
//
//    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
//    {
//        printf("%s\n", cars[i]);
//    }


    // SWAP STRINGS

//    char x[10] = "Ege";
//    char y[10] = "HanHan"; // if array size isn't defined and string lengths are different, 
                             // after swapping without using strcpy, we won't see the value in y after we print it(length of x is smaller)
//    char tmp[20];
//
//    printf("%s ", x);
//    printf("%s\n", y);
//
//    strcpy(tmp, x);
//    strcpy(x, y);
//    strcpy(y, tmp);
//
//    printf("%s ", x);
//    printf("%s", y);

    //struct = collection of related members("variables")
    // they can be different data types
    // listed under one name in a block of memory
    // VERY SIMILAR TO CLASSES in other languages (but has no methods)

//    struct Player
//    {
//        char name[12];
//        int score;
//    };
//
//    struct Player player1;
//    struct Player player2;
//
//    strcpy(player1.name, "Egehan");
//    player1.score = 5;
//
//    strcpy(player2.name, "Asal");
//    player2.score = 2;
//
//    printf("%s\n", player1.name);
//    printf("%d\n", player1.score);
//    printf("%s\n", player2.name);
//    printf("%d\n", player2.score);


    //TYPEDEF -> reserved keyword that gives an existing datatype a "nickname"
    //struct User user1 = {"Ege", "myPassword", 12345678};
    //struct User user2 = {"Han", "hisPassword", 9876543};
    
//    User user1 = {"Ege", "myPassword", 12345678};
//    User user2 = {"Han", "hisPassword", 9876543};
//
//    printf("%s\n", user1.name);
//    printf("%d\n", user2.id);
//    printf("%s", user1.password);

    // Array of structs

//    Student student1 = {"ege", 3.2};
//    Student student2 = {"han", 2.82};
//    Student student3 = {"asal", 2.45};
//    Student student4 = {"bitti", 4.0};
//
//    Student students[] = {student1, student2, student3, student4};
//
//    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
//    {
//        printf("%s ", students[i].name);
//        printf("%.2f\n", students[i].GPA);
//    }

    // memory = an array of bytes within a RAM (street)
    // memory block = a single unit (byte) within a memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)
    // You can think those like memory is a street, memory block is a person and memory address is the house address

//    char a = 'X';
//    char b = 'Y';
//    char c = 'Z';
//
//    printf("%d bytes\n", sizeof(a));
//    printf("%d bytes\n", sizeof(b));
//    printf("%d bytes\n", sizeof(c));
//
//    //memory blocks
//    printf("\n%p\n", &a); 
//    printf("%p\n", &b);
//    printf("%p\n", &c);
//    return 0;

    //POINTERS

    //pointer -> a "variable-like" reference that holds a memory address to another variable, array, etc.
    // some tasks are performed more easily with pointers
    // * -> indirection operator (value at address)
    // pointer's data type should be the same as the datatype of the variable its pointing to

//    int age = 22;
//    int *pAge = &age;
//
//    printf("address of age: %p\n", &age);
//    printf("Value of pAge: %p\n", pAge);
//
//    printf("value of age: %d\n", age);
//    printf("Value at stored address: %d\n", *pAge);
//
//    printf("Size of age: %d bytes \n", sizeof(age));
//    printf("Size of pAge: %d bytes \n", sizeof(pAge));

//    int age = 22;
//    int *pAge = &age;
//    printAge(pAge);
    
    // LINKED LIST

//    node_t node1, node2, node3;
//    node_t *head;
//
//    node1.value=40;
//    node2.value=30;
//    node3.value=50;
//    head = &node1;
//    node1.next = &node2;
//    node2.next = &node3;
//    node3.next = NULL;
//    printList(head);
}

void hello()
{
    printf("HELLO");
    char name[25];
    printf("\nWhat is your name? ");
    //scanf("%s", &name); // you can't accept a sentence using scanf
    fgets(name, 25, stdin);
    printf("Your name is %s", name);
}