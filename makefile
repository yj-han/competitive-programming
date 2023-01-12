.PHONY: clean

binaries=baekjoon

all:
	clean $(bianries)
clean:
	rm -f $(binaries) *.o