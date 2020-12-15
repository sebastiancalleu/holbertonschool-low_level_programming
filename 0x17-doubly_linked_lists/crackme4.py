# uncompyle6 version 3.7.4
# Python bytecode 3.4 (3310)
# Decompiled from: Python 2.7.12 (default, Oct  5 2020, 13:56:01) 
# [GCC 5.4.0 20160609]
# Warning: this version of Python has problems handling the Python 3 "byte" type in constants properly.

# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-05 19:44:37
# Size of source mod 2**32: 195 bytes
pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
if pwd == ok:
    print('OK')
else:
    print('KO')