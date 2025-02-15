# Problem G. Great Sign

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `1 second`  
### Memory Limit: `1024 mebibytes`  

---

On one of the planets in a far, far away galaxy, a numeral system with base **b** is used. In one of the major cities on this planet, there is a developed network of buses. The routes of the buses are numbered with **positive integers**.

One day, the **Intergalaxy Collegiate Programming Contest (ICPC) Finals** was held in this city. The coach of the team from Earth noticed an interesting fact: at the stop near the contest venue, there are **x** bus route numbers written on the banner, and **each of the b digits appears exactly once**.

The coach found that this fact is the **great sign of future victory** and asked his team to check for given **x** and **b** whether such a situation is possible. If it is, the team must **output the b-ary representation of the minimum possible value of the largest number** to be written on the banner.

---

## Input

- The first line contains **one integer** `x` — the number of bus routes whose numbers are displayed on the banner (**1 ≤ x ≤ 100**).
- The second line contains **one integer** `b` (**2 ≤ b ≤ 100**) — the base of the numeral system.

---

## Output

- If the situation is **impossible**, output `-1`.  
- Otherwise, output the **b-ary representation** of the **minimum possible value** of the **largest** bus route number displayed on the banner, as a sequence of integers representing the corresponding digits in **decimal notation**, **ordered from the most significant b-ary digit to the least significant**.

For example, the number `CD3₁₆` should be output as `"12 13 3"`.

---

## Examples

### **Input**
```
10
10
```

### **Output**
```
-1
```

### **Input**
```
9
10
```

### **Output**
```
1 0
```

---

## **Note**
- In the **first example**, it is **impossible** to form `10` positive numbers from the `10` digits of the **decimal system** in the required way, as `0` is **not a positive number**.  
- In the **second example**, the list of routes will be `10, 2, 3, 4, 5, 6, 7, 8, 9`.
