ft_irc is an IRC (Internet Relay Chat) server developed in C++ that recreates the main features of a real chat server following the IRC protocol standards (RFC 1459 and RFC 2812). It allows multiple clients to connect to the server, authenticate, join channels, send private messages, and communicate in real time with other users.

The server manages client connections through TCP sockets and uses a non-blocking, event-driven architecture to handle multiple users simultaneously. It supports the most common IRC commands, channel creation and management, user permissions, channel operators, invitations, topics, and channel modes.

The project focuses on reproducing the behavior of a standard IRC server while respecting the protocol specifications, ensuring that clients can communicate and interact through channels in a way that is consistent with traditional IRC networks.
