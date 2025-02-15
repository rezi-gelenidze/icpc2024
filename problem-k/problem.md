# Problem K. Know How To Format

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `1 second`  
### Memory Limit: `1024 mebibytes`  

---

You are given an expression of the form **a = b + c**, where:

- **a** is a **keyword** (a **non-empty string** of **digits and lowercase or uppercase English letters**, starting with a letter).
- **b** and **c** can be either:
  - A **keyword** (like **a**).
  - A **positive integer numeral** in **decimal notation** (a **non-empty string** of digits **starting with a non-zero digit**).

You need to **place apostrophes** in **all numerals** in the expression, **if they are present**.

The apostrophes must be placed as follows:
- The **first apostrophe** is placed **between the third rightmost and fourth rightmost digits** (if both digits are present).
- The **second apostrophe** is placed **between the sixth rightmost and seventh rightmost digits** (if both digits are present).
- In general, the **k-th apostrophe** is placed **between the 3k-th rightmost and (3k+1)-th rightmost digits** (if both are present).

---

## Input

- The **input** consists of a **single line** of the form **a = b + c**.
- **a** is a **non-empty string** composed of:
  - **Lowercase and uppercase English letters** and **digits**.
  - **Starts with a letter**.
- **b** and **c** are either:
  - A **non-empty string** composed of **lowercase and uppercase English letters** and digits, starting with a letter.
  - A **non-empty string of digits starting with a non-zero digit**.
- The **length** of each of the strings **a, b, and c** does **not exceed 1000 characters**.
- There are **no spaces** between the strings and the characters **+** and **=**.

---

## Output

Output the **expression** obtained from the **original** by **inserting apostrophes into numerals**.  
**No other changes** (such as inserting spaces) are allowed.

---

## Example

### **Input**
```
mrc2024=mrcq+2024117
```

### **Output**
```
mrc2024=mrcq+20'241'117
```

### **Input**
```
success=skill+luck
```

### **Output**
```
success=skill+luck
```

---

## **Explanation of the Example**

| **Standard Input**               | **Standard Output**          |
|----------------------------------|-----------------------------|
| `mrc2024=mrcq+2024117`          | `mrc2024=mrcq+20'241'117`  |
| `success=skill+luck`            | `success=skill+luck`        |

- In the **first example**, the **number 2024117** is formatted with **apostrophes**:
  - **Digits from the right**: `...117`
  - **Third from the right** → **`241'117`**
  - **Sixth from the right** → **`20'241'117`**
- In the **second example**, there are **no numerals**, so the output remains **unchanged**.

---
