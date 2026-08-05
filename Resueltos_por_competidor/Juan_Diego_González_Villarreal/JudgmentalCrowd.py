"""
 Autor: Juan Diego Gonzalez Villarreal
 Problema: Harder Horizons
 Juez: Codeforces
 Veredicto: Accepted
 URL: https://codeforces.com/gym/106178/problem/H
"""

import sys, re

input = sys.stdin.buffer.readline

data = input().decode("utf-8")
pat1 = re.findall('ha',data)
pat2 = re.findall('boooo',data)
pat3 = re.findall('bravo',data)

res = len(pat1)-len(pat2)+(len(pat3)*3)

sys.stdout.write(str(res))