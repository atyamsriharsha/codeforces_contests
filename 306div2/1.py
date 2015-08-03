s=raw_input()
if s.count("AB")+s.count("BA")-s.count("ABA")>=2:
    print "YES"
else:
    print "NO"