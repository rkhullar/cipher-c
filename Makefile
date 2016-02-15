# author	:  Rajan Khullar
# created	:  02/14/16
# updated	:  02/14/16

rebuild: clean compile

clean:
	@rm -rf target src/*~

compile: src/target.c
	@gcc src/target.c -o target

test: rebuild
	@./target hello world
