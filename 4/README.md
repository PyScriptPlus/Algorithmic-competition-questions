<div dir="rtl">

# مسئله زمان پخت غذا

## عنوان: محاسبه زمان پایان

صنم در حال آشپزی بود که متوجه شد برای پختن کامل غذا باید چند دقیقه صبر کند. او به شما ساعت فعلی و میزان دقیقه‌ای که باید صبر کند را می‌گوید و از شما زمان پایان پختن غذا را می‌خواهد.

### ورودی

- در خط اول دو عدد صحیح `H` و `M` با فاصله از یکدیگر آمده که به ترتیب نشان‌دهنده ساعت فعلی و دقیقه فعلی هستند.
- در خط دوم یک عدد صحیح `X` آمده که نشان‌دهنده میزان دقیقه‌ای است که صنم باید صبر کند.

**محدودیت‌ها:**  
- ساعت `H` بین ۰ تا ۲۳  
- دقیقه `M` بین ۰ تا ۵۹  
- `X` بین ۰ تا ۱۰,۰۰۰ (ده هزار)

### خروجی

در تنها خط خروجی دو عدد صحیح که زمان جدید را در قالب ساعت و دقیقه نشان می‌دهد چاپ کنید.

### مثال

**ورودی نمونه ۱:**
```
12 30
45
```
**خروجی نمونه ۱:**
```
13 15
```

**ورودی نمونه ۲:**
```
23 45
30
```
**خروجی نمونه ۲:**
```
0 15
```

</div>

---

<div dir="ltr">

# Cooking Time Problem

## Title: Calculate End Time

Sanam was cooking and realized she needs to wait a few more minutes for the food to be ready. She gives you the current time and the number of minutes she must wait, and asks you to calculate the finishing time.

### Input

- The first line contains two integers `H` and `M` separated by a space, representing the current hour and current minute.
- The second line contains an integer `X` representing the number of minutes Sanam must wait.

**Constraints:**  
- 0 <= H <= 23  
- 0 <= M <= 59  
- 0 <= X <= 10000

### Output

Print two integers on a single line representing the new time (hour and minute) after waiting.

### Examples

**Sample Input 1:**
```
12 30
45
```
**Sample Output 1:**
```
13 15
```

**Sample Input 2:**
```
23 45
30
```
**Sample Output 2:**
```
0 15
```

</div>
