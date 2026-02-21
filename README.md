🖧 TCP Socket Programming in C (Server–Client Communication)

This project demonstrates basic TCP socket communication using the C programming language on Linux.

It includes:

A TCP Server

A TCP Client

Communication using IPv4 (AF_INET)

Blocking sockets

Basic message transmission

📌 Project Overview

The server:

Creates a TCP socket

Binds to a port (11000)

Listens for incoming connections

Accepts a client

Sends a message to the client

The client:

Creates a TCP socket

Connects to the server (127.0.0.1:11000)

Reads data sent by the server

Prints the received message

🏗️ Technologies Used

C Programming

POSIX Socket API

Linux / Ubuntu

IPv4 (AF_INET)

TCP (SOCK_STREAM)

📂 Project Structure
.
├── server.c
├── client.c
└── README.md
⚙️ How to Compile

Open terminal in project directory:

Compile Server
gcc server.c -o server
Compile Client
gcc client.c -o client
▶️ How to Run
Step 1: Start Server
./server

Expected output:

Socket gets created successfully
Bind operation with socket is successful
Server is live at port 11000
Step 2: Run Client (in another terminal)
./client

Expected output:

Client Successfully connected with server
Data from server is : Jay Ganesh from server
🔍 Important Concepts Covered
1️⃣ socket()

Creates a communication endpoint.

2️⃣ bind()

Associates socket with IP address and port.

3️⃣ listen()

Marks socket as passive (ready to accept connections).

4️⃣ accept()

Accepts client connection and creates a new socket.

5️⃣ connect()

Client connects to server.

6️⃣ read() / write()

Used for sending and receiving data.



📚 Learning Outcome

After completing this project, I understood:

Basic TCP communication

How client-server architecture works

Socket lifecycle in Linux

Network byte order

Blocking I/O behavior

👨‍💻 Author

Suyash Patil




