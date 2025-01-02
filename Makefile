all:
	@$(MAKE) -C ex00
	@$(MAKE) -C ex01
	@$(MAKE) -C ex02
	@$(MAKE) -C ex03

clean:
	@$(MAKE) -C ex00 clean
	@$(MAKE) -C ex01 clean
	@$(MAKE) -C ex02 clean
	@$(MAKE) -C ex03 clean

fclean: clean
	@$(MAKE) -C ex00 fclean
	@$(MAKE) -C ex01 fclean
	@$(MAKE) -C ex02 fclean
	@$(MAKE) -C ex03 fclean

re: fclean all

.PHONY: all clean fclean re ex00 ex01 ex02 ex03
