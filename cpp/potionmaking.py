from fractions import Fraction
t=int(input())
for i in range(t):
    n=int(input())
    ans = Fraction(n,100-n).denominator + Fraction(n,100-n).numerator
    print(ans)