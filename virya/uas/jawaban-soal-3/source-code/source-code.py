import tkinter as tk
from tkinter import messagebox

def show_message():
    messagebox.showinfo("Pesan", "Halo, ini adalah GUI sederhana!")

root = tk.Tk()
root.title("Contoh GUI Sederhana")
root.geometry("300x200")

label = tk.Label(root, text="Selamat datang di GUI dengan Tkinter!")
label.pack(pady=10)

button = tk.Button(root, text="Klik Saya", command=show_message)
button.pack(pady=10)

root.mainloop()
