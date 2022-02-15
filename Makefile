
PasswordChecker: PasswordChecker.c
	gcc -g -o $@ $<

clean:
	rm -rf PasswordChecker
