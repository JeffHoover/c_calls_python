This code to call python from C is originally from:
http://darmawan-salihun.blogspot.com/2012/12/embedding-python-code-in-c-raspberry-pi.html


To fix the fact that gcc doesn't find #include < python2.7/Python.h >
even though python-dev is installed and user/lib/python2.7 exists:

$ C_INCLUDE_PATH=/usr/include/python2.7
$ export C_INCLUDE_PATH

From:
https://ubuntuforums.org/showthread.php?t=2109341&p=12476908#post12476908 

