# -*- coding: utf-8 -*-

def add(a, b):
	print "덧셈 %d + %d" % (a, b)
	return a + b

def subtract(a, b):
	print "뺄셈 %d - %d" % (a, b)
	return a - b

def multiply(a, b):
	print "곱셈 %d * %d" % (a, b)
	return a * b

def divide(a, b):
	print "나눗셈 %d / %d" % (a, b)
	return a / b

print "함수만으로 계산해 봅시다!"

age = add(20, 7)
height = subtract(200, 29)
weight = multiply(13, 5)
iq = divide(300, 2)

print "나이: %d, 키: %d, 몸무게: %d, IQ: %d" % (age, height, weight, iq)

# 추가 점수 문제, 일단 써보세요
print "문제가 있어요."

what = add(age, subtract(height, multiply(weight, divide(iq, 2))))

print "결과: ", what, "손으로 계산할 수 있나요?"