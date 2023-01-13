.PHONY: clean

binaries=baekjoon ./codeforces/codeforces

all:
	clean $(binaries)
clean:
	rm -f $(binaries) *.o