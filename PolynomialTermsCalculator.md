#  Polynomial Type Detector in C

##  Overview

This project is a simple C program that takes a polynomial equation as input and determines its type based on the number of terms.

It classifies the input as:

* **Monomial** → 1 term
* **Binomial** → 2 terms
* **Polynomial** → 3 or more terms

---

##  Objective

To understand and apply:

* String handling in C
* Looping and conditional logic
* Basic parsing of mathematical expressions

---

##  How It Works


A polynomial consists of terms separated by:

* `+` (plus)
* `-` (minus)

So:

* Count how many `+` and `-` operators exist (excluding the first character)
* Number of terms = operators + 1

---

## Algorithm

1. Take polynomial input as a string using `fgets`
2. Initialize `terms = 1`
3. Traverse the string character by character
4. If character is `+` or `-`:

   * Ignore if it's the first character
   * Otherwise, increment `terms`
5. Based on `terms`, classify:

   * 1 → Monomial
   * 2 → Binomial
   * ≥3 → Polynomial

---

## 💻 Code

```c
#include <stdio.h>
#include <string.h>

int main() {
    char poly[100];
    int terms = 1;

    printf("Enter a polynomial: ");
    fgets(poly, sizeof(poly), stdin);

    for(int i = 0; poly[i] != '\0'; i++) {
        if((poly[i] == '+' || poly[i] == '-') && i != 0) {
            terms++;
        }
    }

    if(terms == 1) {
        printf("It is a Monomial\n");
    }
    else if(terms == 2) {
        printf("It is a Binomial\n");
    }
    else {
        printf("It is a Polynomial\n");
    }

    return 0;
}
```

---

## ▶️ Example Runs

### Input:

```
5x^3
```

Output:

```
Monomial
```

---

### Input:

```
x^2 + 3
```

Output:

```
Binomial
```

---

### Input:

```
x^2 + 3x + 1
```

Output:

```
Polynomial
```

---

## ⚠️ Limitations

This program assumes:

* Proper formatting of input
* Terms are separated using `+` or `-`
* No advanced parsing of expressions

It may not handle:

* Invalid input formats
* Multiple operators together (`x^2+-3x`)
* Missing spaces

---

## 🚀 Possible Improvements

* Remove newline (`\n`) from input
* Ignore extra spaces
* Validate polynomial syntax
* Extract coefficients and powers
* Find degree of polynomial
* Build a full polynomial parser

---

## 🧠 Key Concepts Learned

* `fgets()` for safe string input
* String traversal using loops
* Character comparison
* Problem simplification
* Basic compiler-like thinking

---

## 📂 Project Structure

```
Polynomial-Type-Detector/
│
├── main.c
└── README.md
```

---

## 🔥 Future Scope

This project can be extended into:

* Polynomial calculator
* Symbolic algebra system
* Expression evaluator
* Mini compiler/parser

---

## 👨‍💻 Author

**Ayush Burman**

---

## ⭐ If you found this useful

Give the repo a ⭐ and keep building!

---







#include <stdio.h>
#include <string.h>

int main() {
    char poly[100];
    int terms = 1; // at least one term exists

    printf("Enter a polynomial: ");
    fgets(poly, sizeof(poly), stdin);

    // Count '+' and '-' to determine number of terms
    for(int i = 0; poly[i] != '\0'; i++) {
        if(poly[i] == '+' || poly[i] == '-') {
            // avoid counting '-' if it's the first character
            if(i != 0) {
                terms++;
            }
        }
    }

    // Determine type
    if(terms == 1) {
        printf("It is a Monomial\n");
    }
    else if(terms == 2) {
        printf("It is a Binomial\n");
    }
    else {
        printf("It is a Polynomial\n");
    }

    return 0;
}
