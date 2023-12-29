# Important
Always do a clean recompile on a different system.

# How to test:
sudo insmod <name>.ko
lsmod | grep <name>
dmesg | grep <name>
sudo rmmod <name>.ko
