import time
import sys

def print_lyrics():
    lyrics = [
        "Sambhaal ke rakha wo phool mera tu",
        "Meri shayari mein zaroor raha tu",
        "Jo aankhon mein pyaari si duniya basaayi",
        "Wo duniya bhi tha tu , wo lamha bhi tha tu",
        "Haan , lagte hain mujhko ye kisse sataane",
        "Deta na dil mera tujhko bhulaane",
        "Adhoore se vaade , adhoori si raatein",
        "Ab hisse mein daakhil mere bas wo yaadein"
    ]

    delays = [1.3, 1.3, 0.9, 0.7, 0.9, 0.9, 0.9, 1.5]

    print("lyrics:\n")
    time.sleep(1.9)

    for i, line in enumerate(lyrics):
        for char in line:
            sys.stdout.write(char)
            sys.stdout.flush()
            time.sleep(0.08)
        print()
        time.sleep(delays[i])

print_lyrics()

   