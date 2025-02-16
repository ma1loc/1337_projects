# ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE   42
# endif

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>

size_t	ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t len);
void	ft_putstr_fd(char *str);
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, char c);
char	*ft_strdup(const char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	ft_perror(char *str);
void	is_there_extension(char *map);
char	**read_map(char *map);
int		count_lines(char *map);
int		count_cols(char **map);
void	map_free(char **readed_map);

typedef struct s_player
{
    void *up;
    void *down;
    void *left;
    void *right;
} t_player;

typedef struct s_game
{
	char		**map;
	char		**map_copy;
	int			rows;
	int			cols;
	int			player_row;
	int			player_col;
	int			exit_row;
	int			exit_col;
	int			collectibles;
	int			collected;
	int			moves;
	int			player_count;
	int			exit_count;
	void		*mlx;			// -- done
	void		*win;			// -- done
	void		*textures[5];	// -- not yet
	t_player	player;
	void		*enemy[5];
}	t_game;

t_game	*pars_the_map(char *map);
t_game	*map_processing(char *map);
void	is_map_valid(t_game *game);
void	wall_check(t_game *game);
void	cleanup_and_exit(char *str, t_game *game);
void	count_duplicate_char_in_the_map(t_game *game);
void	check_is_valid_dup_char(t_game *game);
void	finding_player_position(t_game *map);
void	finding_player_exit(t_game *game);
void	map_validation_path(t_game *game, int row, int col);
void	is_reach_all_map(t_game *game);

void	process_the_map_rendering(t_game *game);
void	put_img_to_win(t_game *game);
void	load_player_images(t_game *game);
void	load_enemy_images(t_game *game);
void	player_directions(t_game *game, int key_move);
void	enemy_directions(t_game *game);


#endif