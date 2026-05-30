# Football score

# مسئله محاسبه امتیاز تیم فوتبال / Football Team Points Calculator

## فارسی

### عنوان: محاسبه امتیاز تیم در لیگ

به تازگی مسئول استادیوم فوتبال تغییر کرده و فرد جدیدی برای این عنوان انتخاب شده است. او می‌خواهد تحولی جدید در سیستم امتیازدهی به تیم‌ها ایجاد کند. برای این کار می‌خواهد برنامه‌ای بنویسد که به صورت خودکار امتیاز هر تیم را محاسبه کند.

**قانون امتیازدهی:**
- هر برد = **۳ امتیاز**
- هر تساوی = **۱ امتیاز**
- هر باخت = **۰ امتیاز**

### ورودی

در یک خط، سه عدد صحیح `w`، `e` و `l` به ترتیب آورده می‌شوند که نشان‌دهنده‌ی تعداد برد، تعداد تساوی و تعداد باخت تیم هستند.

\[
1 \leq w, e, l \leq 100
\]

### خروجی

در یک خط، مجموع امتیازات تیم باید چاپ شود.

### مثال

**ورودی نمونه ۱:**
```
3 2 1
```
**خروجی نمونه ۱:**
```
11
```
(چون \(3 \times 3 + 2 \times 1 + 1 \times 0 = 9 + 2 = 11\))

**ورودی نمونه ۲:**
```
5 0 2
```
**خروجی نمونه ۲:**
```
15
```

---

## English

### Title: Football Team Points Calculation

The new manager of a football stadium wants to automate the team scoring system. He needs a program that calculates the total points of a team based on the following rules:

- Win = **3 points**
- Draw = **1 point**
- Loss = **0 points**

### Input

A single line containing three integers `w`, `e`, `l` representing the number of wins, draws, and losses respectively.

\[
1 \leq w, e, l \leq 100
\]

### Output

Print a single integer — the total points of the team.

### Examples

**Sample Input 1:**
```
3 2 1
```
**Sample Output 1:**
```
11
```
(Since \(3 \times 3 + 2 \times 1 + 1 \times 0 = 9 + 2 = 11\))

**Sample Input 2:**
```
5 0 2
```
**Sample Output 2:**
```
15
```
