* {
    box-sizing: border-box;
}

body {
    margin: 0;
    font-family: Arial, sans-serif;
    color: #222;
    background: #fafafa;
}

header {
    border-bottom: 1px solid #ddd;
    padding: 20px 0;
}

header,
main,
footer {
    max-width: 900px;
    margin: auto;
}

.logo {
    color: #1769d1;
    font-size: 24px;
    font-weight: bold;
    text-decoration: none;
}

main {
    padding: 50px 20px;
}

.intro {
    border-bottom: 1px solid #ddd;
    padding-bottom: 30px;
}

.intro h1 {
    font-size: 36px;
    margin-bottom: 10px;
}

.intro p {
    color: #666;
    font-size: 17px;
}

.posts {
    margin-top: 40px;
}

.posts h2 {
    font-size: 22px;
    margin-bottom: 20px;
}

.post {
    display: flex;
    align-items: center;
    gap: 20px;

    padding: 18px 10px;

    color: #222;
    text-decoration: none;

    border-bottom: 1px solid #e5e5e5;
}

.post:hover {
    background: #f0f4f8;
}

.number {
    color: #1769d1;
    font-size: 18px;
    font-weight: bold;
}

.post h3 {
    margin: 0 0 5px;
    font-size: 18px;
}

.post p {
    margin: 0;
    color: #777;
    font-size: 14px;
}

footer {
    padding: 30px 20px;
    color: #888;
    font-size: 14px;
}