#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 100
#define MAX_ARTIST_LENGTH 100
#define MAX_ALBUM_LENGTH 100

struct song {
    char title[MAX_TITLE_LENGTH];
    char artist[MAX_ARTIST_LENGTH];
    char album[MAX_ALBUM_LENGTH];
    int year;
};

void print_song(struct song s) {
    printf("Title: %s, Artist: %s, Album: %s, Year: %d\n", s.title, s.artist, s.album, s.year);
}

int main() {
    struct song s = {"Bohemian Rhapsody", "Queen", "A Night at the Opera", 1975};
    print_song(s);
    return 0;
}
