int mid = left + (right - left) / 2; // ✅ Better mid calculation
instead of (left +right) /2
kyuki bhai 
Ye simple lagta hai, lekin agar left aur right dono bahut bade ho gaye (e.g. INT_MAX - 1), toh:

left + right karte hi integer overflow ho sakta hai!

C++ mein overflow silently hota hai (compiler nahi batata), aur result galat mid index de deta hai ⚠️

✅ Isliye ye formula better hai:
cpp
Copy
Edit
int mid = left + (right - left) / 2;
👇 Yeh kya karta hai:
right - left pehle subtract karta hai (ye overflow nahi karega)

fir uska half leke, left mein add kar deta hai

So even if left and right are large, safe calculation hoti hai, and no overflow.