// 1
#include <stdio.h>

int main() {
    printf("Hello, I am Ayush!\n");
    return 0;
}
---------------------------------
// OUTPUT - Hello, I am Ayush!
---------------------------------
// 2
#include <stdio.h>

int main() {
    int planet_COORD = 5972-12563-145263;
    printf("planet_COORD: %d\n", planet_COORD);
    return 0;
}
m
---------------------------------
// OUTPUT -
    5972-12563-145263
---------------------------------
rd 
// 3 
#include <stdio.h>
#define GRAVITY 100.8

int main() {
    printf("Gravity: %.1f\n", GRAVITY);
    return 0;
}
--------------------------------
// OUTPUT - Gravity: 100.8
-------------------------------

// 4 
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello %s! Here are my COORDINATES - 25637588964\n", name);
    return 0;
}
--------------------------------
// OUTPUT - Enter your name: ml
// Hello ml! Here are my COORDINATES - 25637588964
-------------------------------

// 5
#include <stdio.h>

int main() {
    int Batteries = 100, WIRES = 5;
    printf("Total: %d\n", Batteries + WIRES);
    return 0;
}
--------------------------------
// OUTPUT Total: 105
-------------------------------

//6
#include <stdio.h>

int main() {
    int Planet_temp = 50;
    if(Planet_temp > 30)
        printf("Hot planet\n");
    return 0;
}
-------------------------------
// OUTPUT Hot planet
------------------------------
//7
#include <stdio.h>

int main() {
    int moon = 4;
    if(moon)
        printf("Moon exists\n");
    else
        printf("No moon\n");
    return 0;
}
-------------------------------
// OUTPUT - Moon exists
------------------------------
//8
#include <stdio.h>

int main() {
    int Planet_size = 3;
    if(Planet_size == 1)
        printf("Small planet\n");
    else if(Planet_size == 2)
        printf("Medium planet\n");
    else
        printf("Large planet\n");
}
----------------------------------
// OUTPUT - Large planet
---------------------------------

//9
#include <stdio.h>

int main() {
    int planet = 3;
    switch(planet) {
        case 1: printf("Mercury\n"); break;
        case 2: printf("Venus\n"); break;
        default: printf("Unknown\n");
    }
}

----------------------------------
// OUTPUT - Unknown
---------------------------------
//11
#include <stdio.h>

int main() {
    for(int i=1000;i<=1005;i++ )
        printf("Count %d\n", 2 * i + 4 * i);
}
--------------------------------
/* Count 6000
Count 6006
Count 6012
Count 6018
Count 6024
Count 6030
*/
-------------------------------

    #include <stdio.h>

int main() {
    int i=1;
    while(i<=3){
        printf("Galaxy %d\n", i);
        i++;
    }
}
--------------------------------
/*Fuel Capacity  1
 Fuel Capacity  2
 Fuel Capacity  3
*/
--------------------------------
#include <stdio.h>

int main() {
    int i=1;
    do {
        printf("Orbit %d\n", i);
        i++;
    } while(i<=3);
}
-----------------------------------
/*Orbit 1
 Orbit 2
 Orbit 3
*/
-----------------------------------
#include <stdio.h>

int main() {
    for(int i=1;i<=5;i++){
        if(i==3) break;
        printf("%d\n", i);
    }
}
----------------------------------
#include <stdio.h>

int main() {
    for(int i=1;i<=5;i++){
        if(i==3) continue;
        printf("%d\n", i);
    }
}
-----------------------------------
#include <stdio.h>

void launch() {
    printf("Rocket Launched!\n");
}

int main() {
    launch();
}
----------------------------------
#include <stdio.h>

int fuel(int x) {
    return x*2;
}

int main() {
    printf("%d\n", fuel(5));
}
-----------------------------------
#include <stdio.);
    countdown(n-1);
}

int main(){
    countdown(5);
}
-----------------------------------
#include <stdio.h>

int main() {
    int planets[3]={1,2,3};
    printf("%d\n", planets[0]);
}
------------------------------------
#include <stdio.h>

int main(){
    int stars[3]={10,20,30};
    for(int i=0;i<3;i++)
        printf("%d\n", stars[i]);
}
-----------------------------------

#include <stdio.h>

int main(){
    int grid[2][2]={{1,2},{3,4}};
    printf("%d\n", grid[1][1]);
}
----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
-------------------------------





----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
-------------------------------
    ----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
-------------------------------
----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
-------------------------------
----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
-------------------------------
----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
-------------------------------
----------------------------------
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
}
--------------
#include <stdio.h>

int main() {
    printf("🚀 Initiating launch sequence...\n");
    printf("3... 2... 1... Liftoff!\n");
    return 0;
}
-----------

#include <stdio.h>

int main() {
    char name[20] = "Ayush";
    int age = 23;

    printf("Astronaut: %s\nAge: %d\n", name, age);
    return 0;
}

--------
#include <stdio.h>

int main() {
    int fuel = 80;

    if(fuel > 50)
        printf("Fuel sufficient for journey.\n");
    else
        printf("Refuel needed!\n");

    return 0;
}
------
#include <stdio.h>

int main() {
    float speed = 20000; // km/h
    float time = 5;      // hours

    float distance = speed * time;

    printf("Distance traveled: %.2f km\n", distance);
    return 0;
}
------
#include <stdio.h>

int main() {
    int oxygen = 30;

    if(oxygen < 40)
        printf("⚠️ Low oxygen!\n");
    else
        printf("Oxygen level stable.\n");

    return 0;
}

--------
#include <stdio.h>

int main() {
    for(int i = 5; i > 0; i--)
        printf("%d...\n", i);

    printf("Blast off!\n");
    return 0;
}
-----
#include <stdio.h>

int main() {
    int choice;

    printf("1. Mars\n2. Venus\nChoose planet: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Heading to Mars!\n"); break;
        case 2: printf("Heading to Venus!\n"); break;
        default: printf("Unknown destination.\n");
    }

    return 0;
}
    
-----
#include <stdio.h>

float gravity(float mass) {
    return mass * 9.8;
}

int main() {
    printf("Weight: %.2f N\n", gravity(70));
    return 0;
}
-------

#include <stdio.h>

int main() {
    int temps[3] = {120, -50, 60};

    for(int i = 0; i < 3; i++)
        printf("Planet %d Temp: %d°C\n", i+1, temps[i]);

    return 0;
}

-----
#include <stdio.h>

int main() {
    int signal = 5;

    while(signal > 0) {
        printf("Signal strength: %d\n", signal);
        signal--;
    }

    return 0;
}
-----
#include <stdio.h>

struct Crew {
    char name[20];
    int rank;
};

int main() {
    struct Crew c = {"Neo", 1};
    printf("Crew: %s Rank: %d\n", c.name, c.rank);
    return 0;
}
-----
#include <stdio.h>

int fuel_used(int hours) {
    return hours * 10;
}

int main() {
    printf("Fuel used: %d liters\n", fuel_used(5));
    return 0;
}

-----
#include <stdio.h>

int main() {
    int alien = 1;

    if(alien)
        printf("👽 Alien detected!\n");
    else
        printf("All clear.\n");

    return 0;
}
------
#include <stdio.h>

int main() {
    int x = 10, y = 20;

    printf("Coordinates: (%d, %d)\n", x, y);
    return 0;
}
-------
    #include <stdio.h>

int main() {
    int error = 0;

    if(error == 0)
        printf("System OK\n");
    else
        printf("Error detected\n");

    return 0;
}
