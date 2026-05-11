A comparison of different pizza styles based on their core components and preparation methods.

##  Table

## 📊 Component Comparison Table

| Component     | Traditional (Italian)            | American                    | Artisan                             | Fast Food                          |
|--------------|---------------------------------|-----------------------------|-------------------------------------|------------------------------------|
| **Base**     | Thin, Neapolitan                | Medium-thick, pan           | Sourdough, wood-fired thin          | Medium, conveyor-optimised         |
| **Sauce**    | Raw San Marzano                 | Cooked sweet tomato         | Varied — pesto, white, olive oil    | Cooked, standardised               |
| **Cheese**   | Fior di latte, buffalo mozzarella | Low-moisture mozzarella     | Burrata, goat, gorgonzola           | Low-moisture processed blend       |
| **Toppings** | Minimal — 2 to 3                | Generous, layered           | Seasonal, local, unconventional     | Standardised menu toppings         |
| **Cooking**  | Wood fire 485°C (90 sec)        | Gas deck 280°C (8 min)      | Wood fire or steel deck             | Conveyor 230°C (5 min)             |
| **Result**   | Soft, wet, charred, complex     | Even, consistent, filling   | Variable, high quality              | Predictable, convenient            |

---


> Every component choice affects every other.

For example:

- A **wet fresh mozzarella** requires **higher temperature and faster cooking**
- A **thicker base** pairs better with **longer bake times**
- **Minimal toppings** highlight ingredient quality, while **layered toppings** emphasize richness

---

## ⚙️ Understanding the System

Pizza is not just ingredients — it's a **system of interactions**:

- Base thickness ↔ Cooking method  
- Moisture content ↔ Temperature  
- Sauce type ↔ Flavor balance  
- Cheese type ↔ Texture and melt behavior  

---

**CODE** : 

### What Type of BASE you would like ?
>  Thin, Neapolitan | Medium-thick, pan | Sourdough, wood-fired thin | Medium, conveyor-optimised |

-----

> Choose Sauces -> [ Raw San Marzano ] , [Cooked sweet tomato ] , [Varied — pesto] , [white, olive oil  ] , [ Cooked], [standardised  ]
> Choose Cheese -> Fior di latte , buffalo mozzarella ,  Low-moisture mozzarella, Burrata, goat, gorgonzola ,  Low-moisture processed blend
>  **Toppings** -> Mushrooms ,Onions, Bell peppers, Olives (black/green), Spinach, Tomatoes, Corn (popular in Asia/India), Jalapeños, Cheese, basil Pepperoni, Sausage (Italian sausage), Ham, Bacon, Chicken, Salami, Ground beef,Basil, Oregano, Chili flakes, Garlic, Olive oil drizzle
> Size of Pizza? : Individual Slice, small, Medium, Large, Extra Large, jumbo 


Here's your Pizza: name of pizza accordingly



-----------------------------------------------------------------
```


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int base, cheese, topping, size;
    int price = 0;

    //random name generator
    srand(time(0));
    char *names[] = {
        "Dragon Fire Pizza",
        "Galaxy Cheese Burst",
        "Inferno Supreme",
        "Royal italian Delight",
        "Spicy Volcano",
        "Mystic Margherita",
        "Ultimate Fusion Pizza"
    };

     printf("🍕 Welcome to 'BURM' best Pizzeria in INDIA 🍕\n\n");

     //BASE SELECTION
     printf("Choose your Base:\n");
     printf("1. Thin Crust\n2. Thick Crust\n3. Cheese Burst\n");
     scanf("%d", &base);

     switch (base)
     {
     case 1: price += 100; break;
     case 2: price += 120; break;
     case 3: price += 150; break;
     default:  printf("Invalid choice\n"); return 0;
        
     }
     printf("\nChoose your cheese:\n");
     printf("1. Mozzarella\n2. Cheddar\n3. Parmesan\n");
     scanf("%d", &cheese);

     switch(cheese) {
        case 1: price += 80; break;
        case 2: price += 90; break;
        case 3: price += 100; break;
        default: printf("Invalid choice\n"); return 0;
    }

    // Topping selection
    printf("\nChoose your Topping:\n");
    printf("1. Veggies\n2. Chicken\n3. Paneer\n");
    scanf("%d", &topping);

    switch(topping) {
        case 1: price += 70; break;
        case 2: price += 120; break;
        case 3: price += 100; break;
        default: printf("Invalid choice\n"); return 0;
    }
    
    // Size selection
    printf("\nChoose Pizza Size:\n");
    printf("1. Small\n2. Medium\n3. Large\n");
    scanf("%d", &size);

    switch(size) {
        case 1: price += 100; break;
        case 2: price += 150; break;
        case 3: price += 200; break;
        default: printf("Invalid choice\n"); return 0;
    }

// Random pizza name
    int randomIndex = rand() % 7;

    // Final Output
    printf("\n==============================\n");
    printf("Here's your pizza: %s\n", names[randomIndex]);
    printf("Please pay: $ %d\n", price);
    printf("==============================\n");

    return 0;
}



```



