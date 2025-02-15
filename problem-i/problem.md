# Problem I. Interesting Travel

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `2 seconds`  
### Memory Limit: `1024 mebibytes`  

---

The **Berland company "InterCity Jets" (ICJ)** operates **flights between n cities**. In total, there are **m bidirectional airlines** in the ICJ schedule. **Each airline connects two cities**, and it is **guaranteed that it is possible to fly between any two cities using the ICJ airlines with zero or more transfers**.

- If the **arrival flight** and the **departure flight** during a transfer are scheduled from **different terminals**, then **to avoid repeated security checks**, passengers are **transported on commuter buses**.  
- If the transfer happens at **the same terminal**, the transfer is made **via jet bridges**.

A well-known **travel blogger, LazyBoy**, plans to travel on **ICJ planes from city A to city B**.  
- LazyBoy **dislikes using buses**.  
- Since all his flights are sponsored by **ICJ**, he **first wants to minimize the number of inter-terminal transfers (bus rides)**.  
- **Only if there are multiple options with the minimum number of inter-terminal transfers, he then minimizes the number of flights.**

---

## Input

- The first line of input contains **four integers** `n, m, s, f` (**2 ≤ n ≤ 10⁵**, **n - 1 ≤ m ≤ 2 × 10⁵**, **1 ≤ s, f ≤ n**, **s ≠ f**) —  
  - The **number of cities**.
  - The **number of airlines** in the **ICJ schedule**.
  - The **starting city** `s`.
  - The **ending city** `f`.

- The next `m` lines describe a **bidirectional airline** and contain **four integers** `aᵢ, bᵢ, tₐᵢ, tᵦᵢ` (**1 ≤ aᵢ, bᵢ ≤ n**, **1 ≤ tₐᵢ, tᵦᵢ ≤ m**, **aᵢ ≠ bᵢ**) —  
  - `aᵢ` and `bᵢ` are the **two cities** connected by the airline.  
  - `tₐᵢ` is the **terminal number of the first airport**.
  - `tᵦᵢ` is the **terminal number of the second airport**.

It is **guaranteed** that:
- **Any two airports are directly connected by no more than one ICJ airline**.
- **It is possible to fly between any two cities using ICJ**.

---

## Output

Print **two integers**:
1. The **minimum number of bus trips** LazyBoy will have to take during his journey.
2. The **minimum number of flights** that can be made **with that number of bus trips**.

---

## Example

### **Input**
```
3 3 3 1
1 1 2 1
3 1 2 2
1 2 3 3
```

### **Output**
```
0 1
```

---

## **Explanation of the Example**

| **Standard Input** | **Standard Output** |
|--------------------|--------------------|
| `3 3 3 1`         | `0 1`              |
| `1 1 2 1`         |                    |
| `3 1 2 2`         |                    |
| `1 2 3 3`         |                    |

- **LazyBoy starts at city 3 and wants to reach city 1**.
- He **takes a direct flight from city 3 to city 1 without inter-terminal transfers**.
- **Thus, he makes `0` bus trips and `1` flight**.

---