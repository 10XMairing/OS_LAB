Qa.c --> output :

parent pid() : 13433
parent ppid() : 12706
Hello world!
child : pid() : 13434
child ppid() : 13433 Hello world!

Qb.c --> output :

child : pid() : 13701
child ppid() : 13700
Hello world!
parent pid() : 13700
parent ppid() : 12706
Hello world!

Qc.c --> outout :

child : pid() : 13923
child ppid() : 13922
total 28
-rwxr-xr-x 1 tenx tenx 8600 Jan 30 13:29 a.out
-rw-r--r-- 1 tenx tenx 890 Jan 30 13:24 Qa.c
-rw-r--r-- 1 tenx tenx 906 Jan 30 13:23 Qb.c
-rw-r--r-- 1 tenx tenx 898 Jan 30 13:29 Qc.c
-rw-r--r-- 1 tenx tenx 263 Jan 30 13:28 README.md
parent pid() : 13922
parent ppid() : 12706
