Here is the extracted problem statement in Markdown format:

```markdown
# Problem F. Funds and Exchange

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `1 second`  
### Memory Limit: `1024 mebibytes`  

---

### **This is an interactive problem.**

TradeOn is a proprietary trading firm that provides liquidity for many exchanges with a particular focus on emerging markets. They also provide professional services as a derivatives market maker on different exchanges.

As a developer at TradeOn, you have been tasked with optimizing the connections between **exchange servers** and **fund servers**. There are a total of **10⁹ exchange servers** and **10⁹ fund servers**, and each exchange server is **directly connected to every fund server**, resulting in **10¹⁸ connections**.  

Testers have noted that **two connections** are performing **slower than expected**. Typically, the **latency** between servers is **1ms**; however, in **two cases**, the latency is **2ms**. To resolve the issue, testers need your help to identify which connections are slow.

To find the **slow connections**, you can **measure the total latency** of certain connections. Specifically, you can select **eₗ, eᵣ, fₗ, fᵣ**, run tests with these parameters, and determine the **total latency** of all connections between **exchange servers** numbered **eₗ ≤ i ≤ eᵣ** and **fund servers** numbered **fₗ ≤ j ≤ fᵣ**.

The testers **urgently request information** about the slow connections, so you may measure the **total latency no more than 125 times**.

---

## Interaction Protocol

The interaction begins with your program making **queries**.  
Each query is a line in the format:

```
? eₗ eᵣ fₗ fᵣ
```
(without quotes), where:

- **1 ≤ eₗ ≤ eᵣ ≤ 10⁹**
- **1 ≤ fₗ ≤ fᵣ ≤ 10⁹**

In response, the **jury program** outputs a **single integer** — the **total latency** of selected connections.  
You may make **no more than 125 queries in total**.

### **Final Output:**
After identifying the two slow connections, output your answer in the format:

```
! e₁ f₁ e₂ f₂
```
(without quotes), where:

- **e₁, f₁** are the server numbers that make up the **first slow connection**.
- **e₂, f₂** are the server numbers that make up the **second slow connection**.

Connections can be **output in any order**.  
**Note:** Outputting the answer does **not** count as a query.

---

### **Important Constraints**
- **Slow connections do not change** during the interaction (i.e., the interactor is **not adaptive**).
- **You must print the newline and flush the output buffer** after each query and after the answer, or your solution will get **IL (Idleness Limit Exceeded).**

---

## Example

### **Input**/**Output**
```
? 1 1 1 1
2
? 2 2 2 2
2
? 3 4 5 6
9
? 4 4 6 6
10
? 6 4 6 6
4
? 6 5 6 6
2
! 2 2 6 4
```
