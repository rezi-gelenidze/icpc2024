# Problem E. Encode The Triangle

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `1 second`  
### Memory Limit: `1024 mebibytes`  

---

### **This is a double-run problem**

You need to **encode a triangle** with a **non-zero area** and integer sides with a perimeter of **p**, such that **no two sides are equal**, into a triangle with a **non-zero area** and a perimeter of **p - 6**, and then restore the original triangle from the encoded one.

---

## Input

- The first line of the input file contains the mode of operation:  
  - `"encode"` if you need to encode triangles, or  
  - `"decode"` if you need to restore the original ones.  
- The second line contains a single integer **t** (1 ≤ t ≤ 25,000) — the number of test cases.  
- The next **t** lines contain test cases:

  - In **encoding mode**, each test case contains three integers **a, b, c** — the sides of the original triangle.  
    - It is guaranteed that **3 ≤ a + b + c ≤ 1000**.  
    - The sides **a, b, and c** are **pairwise distinct**.  
    - The triangle with sides **a, b, c** exists and has a **non-zero area**.  

  - In **decoding mode**, each test case contains three integers **a', b', c'** — the sides of the triangle output by your program in encoding mode.

---

## Output

- **Encoding mode:**  
  - For each test case, output three integers **a', b', c'** in **arbitrary order**.  
  - The triangle with sides **a', b', c'** must exist, have a **non-zero area**, and satisfy:  
    **a' + b' + c' = a + b + c - 6**.

- **Decoding mode:**  
  - For each test case, output the three original sides of the triangle.  
  - The order of the sides **within a single test case is arbitrary**.

---

## Example

### **Input**
```
encode
2
20 24 11
25 36 49
```

### **Output**
```
18 18 13
25 30 49
```

### **Input**
```
decode
2
18 13 18
25 49 30
```

### **Output**
```
11 20 24
25 36 49
```