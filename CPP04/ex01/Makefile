CC = g++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

# 소스 파일 목록
SRCS = main.cpp

# 오브젝트 파일 목록
OBJS = $(SRCS:.cpp=.o)

# 실행 파일 이름
NAME = brain

# 기본 타겟: 컴파일하고 실행 파일을 생성
all:	$(NAME)

# 실행 파일을 만드는 규칙
$(NAME):$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

# .c 파일을 .o 파일로 변환하는 규칙
%.o: %.cpp
		$(CC) $(CCFLAGS) -c $< -o $@

# clean: 생성된 파일 삭제
clean:
		rm -f $(OBJS)

# fclean: 실행 파일 및 .o 파일 삭제
fclean:		clean
		rm -f $(NAME)

# re: 모든 것을 다시 빌드
re:		fclean all