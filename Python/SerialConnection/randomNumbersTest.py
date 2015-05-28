__author__ = 'Magnus Johansson'
# continously generates a random number and writes it to a file
#!/usr/bin/python
import time
from random import randint
while True:
        randomVal = randint(0, 9)
        with open('workfile', 'w') as f:
                str = 'latest random val is '
                str += `randomVal`
                f.write(str)
        f.close()
        time.sleep(1)
