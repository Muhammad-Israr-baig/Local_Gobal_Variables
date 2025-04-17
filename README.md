# 🌍 C# Variable Scope Demo

This program demonstrates **global** and **local** variable scope in C#.  

---

## 📘 What You Learn

- **Global variables** (accessible throughout the class).  
- **Local variables** (exist only inside a method).  
- **Modifying a global variable using a local variable**.  

---

## 💻 Code Summary

```csharp
private static int global_var = 5;  // Global variable

int local_var = 6;  // Local variable inside Main()

global_var += local_var;  // Updating global variable


🧾 Output Example

pgsql
Copy
Edit
Global variable (Before): 5
Local variable: 6
Global variable (After): 11

