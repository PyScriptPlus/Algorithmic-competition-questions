<div dir="rtl">

# مسئله محمد و حروف صدادار

## عنوان: واکنش به حروف صدادار

محمد به‌شدت آدم عصبی و زودجوشی است و از حروف صدادار متنفر است؛ به‌طوری‌که هر بار یکی از آن‌ها را می‌بیند، با عصبانیت می‌گوید `e` و واکنش نشان می‌دهد. همچنین محمد همیشه لحن هیجانی و همراه با تعجب دارد؛ به همین دلیل در پایان خروجی، یک `!` اضافه می‌شود، حتی اگر در رشته هیچ حرف صداداری وجود نداشته باشد.

حروف صدادار شامل `a`، `e`، `i`، `o` و `u` هستند و ممکن است به‌صورت حروف بزرگ یا کوچک انگلیسی در رشته ظاهر شوند. بنابراین تفاوتی بین حروف بزرگ و کوچک وجود ندارد.

### ورودی

در تنها خط ورودی، یک رشته داده می‌شود که ممکن است شامل حروف بزرگ یا کوچک انگلیسی، فاصله و سایر کاراکترها باشد.

محدودیت:  
1 <= طول رشته <= 100,000 (10^5)

### خروجی

خروجی به این صورت است:
- همیشه با یک حرف **E بزرگ** شروع می‌شود.
- سپس به‌ازای **هر حرف صدادار** موجود در رشته، یک حرف `e` کوچک چاپ می‌شود.
- در پایان، یک علامت `!` قرار می‌گیرد.

توجه: اگر هیچ حرف صداداری وجود نداشته باشد، فقط `E!` چاپ می‌شود.

### مثال

**ورودی نمونه ۱:**
```
Hello World
```
حروف صدادار: e, o, o (3 تا)  
**خروجی نمونه ۱:**
```
Eeee!
```

**ورودی نمونه ۲:**
```
Why
```
بدون حرف صدادار  
**خروجی نمونه ۲:**
```
E!
```

**ورودی نمونه ۳:**
```
aEiOu
```
هر ۵ حرف صدادار (با حروف بزرگ/کوچک)  
**خروجی نمونه ۳:**
```
Eeeeee!
```
(توجه: یک E بزرگ + ۵ تا e کوچک = ۶ حرف + !)

</div>

---

<div dir="ltr">

# Mohammad and Vowels Problem

## Title: Reaction to Vowels

Mohammad is a very irritable and hot-tempered person who hates vowels. Whenever he sees a vowel, he angrily shouts `e`. He also always speaks excitedly with exclamation, so at the end of the output, a `!` is added, even if there are no vowels in the input string.

The vowels are `a`, `e`, `i`, `o`, `u` and can appear in either uppercase or lowercase. Case does not matter.

### Input

A single line containing a string. The string may contain uppercase/lowercase English letters, spaces, and other characters.

Constraints:  
1 <= Length of string <= 100,000 (10^5)

### Output

The output follows this format:
- It always starts with an **uppercase E**.
- Then, for **each vowel** in the input string, one lowercase `e` is printed.
- Finally, an exclamation mark `!` is appended.

If there are no vowels, the output is simply `E!`.

### Examples

**Sample Input 1:**
```
Hello World
```
Vowels: e, o, o (3 vowels)  
**Sample Output 1:**
```
Eeee!
```

**Sample Input 2:**
```
Why
```
No vowels  
**Sample Output 2:**
```
E!
```

**Sample Input 3:**
```
aEiOu
```
All 5 vowels (mixed case)  
**Sample Output 3:**
```
Eeeeee!
```
(Note: 1 uppercase E + 5 lowercase e's = 6 characters + !)

</div>
