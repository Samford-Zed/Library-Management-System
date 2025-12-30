<h1 align="center">📚 Library Management System (C++)</h1>

<p align="center">
  A console-based <b>Library Management System</b> built in <b>C++</b> using <b>file handling</b>, with separate access for
  <b>Admin (Librarian)</b> and <b>Students</b>.
</p>

<hr/>

<h2>🔹 Project Overview</h2>
<p>
  Managing library records manually is time-consuming and difficult to track. This project automates common library tasks
  such as <b>adding</b>, <b>updating</b>, <b>deleting</b>, <b>displaying</b>, and <b>searching</b> books.
  All data is stored using text files, so records remain saved even after the program closes.
</p>

<h2>🛠️ Technologies Used</h2>
<ul>
  <li><b>Language:</b> C++</li>
  <li><b>Concepts:</b> Structures, File Handling (fstream), Switch/If-Else, Basic Authentication</li>
  <li><b>Platform:</b> Console Application</li>
</ul>

<h2>🔐 Default Admin Credentials (Trial)</h2>
<pre>
Username: user
Password: @astu
</pre>
<p>
  ⚠️ You can change these credentials using the <b>Reset Password</b> option in the admin menu.
</p>

<h2>👥 User Roles & Features</h2>

<h3>👨‍🏫 Librarian (Admin Access)</h3>
<ul>
  <li>Secure login with username and password</li>
  <li>Add new books</li>
  <li>Update existing book details</li>
  <li>Delete books</li>
  <li>Display all books</li>
  <li>Search books by <b>Title</b> or <b>Book ID</b></li>
  <li>Reset admin password</li>
</ul>

<h3>🎓 Student Access</h3>
<ul>
  <li>No login required</li>
  <li>View all books in the library</li>
  <li>Search books by <b>Title</b> or <b>Book ID</b></li>
</ul>

<h2>📘 Book Structure</h2>
<p>Each book is represented using a structure like this:</p>
<pre><code>struct Library {
    string title;
    string author;
    string isbn;
    string id;
    int page;
};</code></pre>

<h2>📂 File Handling</h2>
<ul>
  <li><b>library_mgt_record.txt</b> — stores all book records</li>
  <li><b>administrator_book.txt</b> — stores admin username and password</li>
  <li><b>temp.dat</b> — temporary file used during update/delete operations</li>
</ul>

<h2>📋 Main Menu Options</h2>
<ol>
  <li>Administrator (Librarian)</li>
  <li>Student</li>
  <li>About the Project</li>
  <li>Exit</li>
</ol>

<h2>🧠 Project Algorithm (Short)</h2>
<ol>
  <li>Display main menu</li>
  <li>Choose role (Admin / Student)</li>
  <li>If Admin: authenticate username & password</li>
  <li>Perform operations using switch statements</li>
  <li>Read/write records using file handling</li>
  <li>Return to main menu until exit</li>
</ol>

<h2>🚀 How to Run the Project</h2>
<ol>
  <li>Extract the project files</li>
  <li>Open the source code in a C++ IDE (Dev C++, Code::Blocks, etc.)</li>
  <li>Compile and run</li>
  <li>Follow the on-screen menu</li>
</ol>

<h2>🎯 Educational Purpose</h2>
<ul>
  <li>Great for C++ beginners</li>
  <li>Practice with file handling</li>
  <li>Learn menu-driven console programs</li>
  <li>Suitable for academic mini-projects</li>
</ul>

<hr/>

<h2>👨‍💻 Developer</h2>
<ul>
  <li><b>Name:</b> Samuel Zenebe</li>
  <li><b>Type:</b> Academic / Learning Project</li>
  <li><b>Year:</b> 2023</li>
</ul>

<p align="center">
  ⭐ If you find this project useful, please star the repository!
</p>
