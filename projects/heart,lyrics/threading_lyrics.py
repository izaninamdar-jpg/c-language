import time
import sys
import threading
import math
import turtle


# ---------------- LYRICS ----------------

def print_lyrics():

    lyrics = [
        "Sambhaal ke rakha wo phool mera tu",
        "Meri shayari mein zaroor raha tu",
        "Jo aankhon mein pyaari si duniya basaayi",
        "Wo duniya bhi tha tu, wo lamha bhi tha tu",
        "Haan, lagte hain mujhko ye kisse sataane",
        "Deta na dil mera tujhko bhulaane",
        "Adhoore se vaade, adhoori si raatein",
        "Ab hisse mein daakhil mere bas wo yaadein"
    ]

    delays = [1.3, 1.3, 0.9, 0.7, 0.9, 0.9, 0.9, 1.5]

    print("Lyrics:\n")
    time.sleep(1.9)

    # Print each line character by character
    for i, line in enumerate(lyrics):

        for char in line:
            sys.stdout.write(char)
            sys.stdout.flush()
            time.sleep(0.08)

        print()

        # Wait before printing the next line
        time.sleep(delays[i])


# ---------------- HEART ----------------

def draw_heart():

    t = turtle.Turtle()
    screen = turtle.Screen()

    screen.bgcolor("black")

    # First = outline colour, second = fill colour
    t.color("red", "red")

    # 0 = fastest Turtle animation
    t.speed(0)

    # Controls the size of the heart
    scale = 20

    # Controls how many points are used to draw the heart
    steps = 1000

    def hearta(k):
        return 15 * math.sin(k) ** 3

    def heartb(k):
        return (
            12 * math.cos(k)
            - 5 * math.cos(2 * k)
            - 2 * math.cos(3 * k)
            - math.cos(4 * k)
        )

    t.penup()

    # Find the starting point
    x0 = hearta(0)
    y0 = heartb(0)

    t.goto(x0 * scale, y0 * scale)

    t.pendown()

    # Everything drawn between these two lines gets filled
    t.begin_fill()

    # Draw one complete heart from 0 to 2π
    for i in range(steps + 1):

        k = 2 * math.pi * i / steps

        x = hearta(k)
        y = heartb(k)

        t.goto(x * scale, y * scale)

    t.end_fill()

    t.hideturtle()

    turtle.done()


# ---------------- THREADING ----------------

# Create a separate thread whose job is printing the lyrics
lyrics_thread = threading.Thread(target=print_lyrics)

# Start the lyrics thread
# The lyrics can now run while the heart is being drawn
lyrics_thread.start()


# Main thread handles Turtle
draw_heart()


# Wait for lyrics thread to finish before completely ending the program
lyrics_thread.join()