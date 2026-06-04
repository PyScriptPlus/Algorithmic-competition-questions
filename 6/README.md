<div dir="rtl">

# مسئله اپراتور اینترنت در خیابان‌ها

## عنوان: بررسی وجود خط اینترنت مشترک

در یک محله، سه خیابان با شماره‌های 1، 2 و 3 وجود دارد. هر خیابان یا تحت پوشش اپراتور اینترنت X یا اپراتور اینترنت Y است.

رشته‌ای به نام `N` مشخص می‌کند هر خیابان به کدام اپراتور متصل است:
- اگر `N[i]` برابر `X` باشد، خیابان i تحت پوشش اپراتور X است.
- اگر `N[i]` برابر `Y` باشد، خیابان i تحت پوشش اپراتور Y است.

اگر دو خیابان توسط اپراتورهای متفاوت پوشش داده شوند، بین آن‌ها یک خط اینترنت مشترک برقرار می‌شود. بررسی کنید آیا حداقل یک خط اینترنت مشترک بین دو خیابان برقرار می‌شود یا خیر.

### ورودی

یک رشته `N` با طول ۳ شامل کاراکترهای `X` و `Y` به شما داده می‌شود.

**محدودیت:**  
طول رشته دقیقاً ۳ است و هر کاراکتر یا `X` است یا `Y`.

### خروجی

اگر حداقل یک خط اینترنت مشترک برقرار شود، `yes` چاپ کنید، در غیر این صورت `no` چاپ کنید.

### مثال

**ورودی نمونه ۱:**
```
XXY
```
**خروجی نمونه ۱:**
```
yes
```
(توضیح: بین خیابان 1 و 3 یا 2 و 3 خط مشترک وجود دارد)

**ورودی نمونه ۲:**
```
XXX
```
**خروجی نمونه ۲:**
```
no
```
(همه خیابان‌ها با یک اپراتور هستند)

**ورودی نمونه ۳:**
```
YXY
```
**خروجی نمونه ۳:**
```
yes
```

</div>

---

<div dir="ltr">

# Internet Operator in Streets Problem

## Title: Check for Shared Internet Line

In a neighborhood, there are three streets numbered 1, 2, and 3. Each street is covered either by internet operator X or operator Y.

A string `N` specifies which operator each street is connected to:
- If `N[i]` is `X`, street i is covered by operator X.
- If `N[i]` is `Y`, street i is covered by operator Y.

If two streets are covered by different operators, a shared internet line is established between them. Determine whether at least one shared internet line exists between any two streets.

### Input

A string `N` of length 3 consisting of characters `X` and `Y`.

**Constraint:**  
The string length is exactly 3, and each character is either `X` or `Y`.

### Output

Print `yes` if at least one shared internet line is established, otherwise print `no`.

### Examples

**Sample Input 1:**
```
XXY
```
**Sample Output 1:**
```
yes
```
(Explanation: A shared line exists between street 1 and 3, or between street 2 and 3)

**Sample Input 2:**
```
XXX
```
**Sample Output 2:**
```
no
```
(All streets use the same operator)

**Sample Input 3:**
```
YXY
```
**Sample Output 3:**
```
yes
```

</div>
