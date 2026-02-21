# 🖧 TCP Socket Programming in C (Server–Client Communication)

This project demonstrates basic **TCP socket communication** using the **C programming language on Linux**. It covers the fundamental lifecycle of a network connection, from socket creation to data transmission.

---

## 📌 Project Overview

The application consists of two main components communicating over a local network loopback (`127.0.0.1`).

### 🔹 The Server
- Creates a TCP socket.
- Binds to a specific port (**11000**).
- Listens for incoming connection requests.
- Accepts a client and sends a "Jay Ganesh" greeting.

### 🔹 The Client
- Creates a TCP socket.
- Connects to the server's IP and port.
- Reads the incoming data stream.
- Prints the received message to the console.

---

## 🏗️ Technologies Used

* **Language:** C
* **API:** POSIX Socket API
* **Protocol:** TCP (`SOCK_STREAM`)
* **Address Family:** IPv4 (`AF_INET`)
* **Environment:** Linux / Ubuntu

---

## 📂 Project Structure

```text
.
├── server.c      # The passive listener (Server)
├── client.c      # The active connector (Client)
└── README.md     # Documentation
```

⚙️ How to Compile

Open your terminal in the project directory and run:
1. Compile Server
Bash

gcc server.c -o server

2. Compile Client
Bash

gcc client.c -o client

▶️ How to Run

Follow these steps in order:
Step 1: Start the Server
Bash

./server

Expected Output:
Plaintext

Socket gets created successfully
Bind operation with socket is successful
Server is live at port 11000

Step 2: Run the Client (In a new terminal tab)
Bash

./client

Expected Output:
Plaintext

Client Successfully connected with server
Data from server is : Jay Ganesh from server

🔍 Important Concepts Covered

    socket(): Creates the communication endpoint.

    bind(): Assigns the IP address and Port to the socket.

    listen(): Puts the server in passive mode to wait for clients.

    accept(): Extracts the connection request and creates a new socket for data.

    connect(): The client-side call to establish a link to the server.

    read() / write(): Functions used to exchange raw bytes over the connection.

📚 Learning Outcomes

By exploring this code, you will understand:

    The Client-Server architecture model.

    How the Linux kernel manages network file descriptors.

    Handling Network Byte Order (big-endian) vs Host Byte Order.

    The difference between Connection-oriented (TCP) and Connectionless (UDP) logic.

👨‍💻 Author

Suyash Patil
