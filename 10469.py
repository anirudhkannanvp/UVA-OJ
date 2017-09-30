#10469
import sys
for line in sys.stdin:
    a,b=line.split()
    a,b=int(a),int(b)
    print(a^b)