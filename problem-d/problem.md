# Problem D. Deep Numbers

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `1 second`  
### Memory Limit: `1024 mebibytes`  

---

Consider the positive integer **deep number** if:
- It is **not prime** and  
- It is **impossible** to delete some digits from its decimal representation to obtain a prime number.  

For example:
- `104` is a **deep number** because neither `0`, `1`, `4`, `10`, `14`, nor `104` are primes.  
- `2024` is **not** a deep number because we can delete the first, second, and fourth digits and obtain a prime `2`.  

Note that **prime numbers** are the integers that have exactly **two distinct divisors**: themselves and `1`.

---

## Input
- The input contains **one integer** `n` (1 ≤ n ≤ 10⁶) — the number of decimal digits.

---

## Output
- Print **one integer** — the number of `n`-digit deep numbers **modulo 998,244,353**.

---

## Example

### **Input**
```
1
```

### **Output**
```
5
```

---

## **Note**
The one-digit deep numbers, mentioned in the sample, are `1, 4, 6, 8,` and `9`.