/* See LICENSE file for copyright and license details. */

static const Pair pairs[] = {
	/* regex                  action */
	{ "\\.(jpg|png|tiff)$",    "lel-open %s" },
	{ "\\.(mp3|flac|wav)$",    "st -e mpv %s" },
	{ "\\.(mp4|mkv|avi)$",     "mpv %s" },
	{ "^(http://|https://)?(www\\.)?(youtube.com/watch\\?|youtu\\.be/)", "youtube-viewer %s" }
};
