<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>_printf Project</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            background-color: #f4f4f9;
            color: #333;
        }

        h1, h2 {
            color: #2c3e50;
        }

        h2 {
            margin-top: 20px;
        }

        p, li {
            font-size: 16px;
            line-height: 1.6;
        }

        code {
            background-color: #ecf0f1;
            padding: 5px;
            font-family: "Courier New", Courier, monospace;
            border-radius: 4px;
        }

        pre {
            background-color: #2d3436;
            color: white;
            padding: 20px;
            border-radius: 4px;
            overflow-x: auto;
            white-space: pre-wrap;
            word-wrap: break-word;
        }

        .content-section {
            margin-bottom: 30px;
        }

        .content-section ul {
            padding-left: 20px;
        }

        .content-section li {
            margin: 5px 0;
        }

        .code-example {
            background-color: #34495e;
            padding: 10px;
            border-radius: 5px;
            color: white;
        }

        .note {
            background-color: #f39c12;
            padding: 10px;
            border-radius: 5px;
            color: white;
            margin-top: 20px;
        }

        .files-table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 20px;
        }

        .files-table th, .files-table td {
            padding: 10px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }

        .files-table th {
            background-color: #2c3e50;
            color: white;
        }

        .authors {
            font-style: italic;
            margin-top: 20px;
        }
    </style>
</head>
<body>

    <div class="content-section">
        <h1>_printf Project</h1>
        <p>The <strong>_printf</strong> project is a custom implementation of the standard <code>printf</code> function in C. It replicates the behavior of <code>printf</code>, allowing formatted output with simple format specifiers.</p>
        <p>This project was developed as an educational exercise to better understand variadic functions, structures, and argument handling in C.</p>
    </div>

    <div class="content-section">
        <h2>Features</h2>
        <p>The <code>_printf</code> function supports the following format specifiers:</p>
        <table class="files-table">
            <thead>
                <tr>
                    <th>Specifier</th>
                    <th>Description</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><code>%s</code></td>
                    <td>Prints a string.</td>
                </tr>
                <tr>
                    <td><code>%c</code></td>
                    <td>Prints a single character.</td>
                </tr>
                <tr>
                    <td><code>%d, %i</code></td>
                    <td>Prints a signed integer in base 10.</td>
                </tr>
                <tr>
                    <td><code>%%</code></td>
                    <td>Prints a literal <code>%</code> character.</td>
                </tr>
            </tbody>
        </table>
    </div>

    <div class="content-section">
        <h2>Prototype</h2>
        <pre><code>int _printf(const char *format, ...);</code></pre>
    </div>

    <div class="content-section">
        <h2>Usage</h2>
        <ol>
            <li>Include the <code>main.h</code> header file in your code.</li>
            <li>Call <code>_printf</code> with a format string and the appropriate arguments.</li>
        </ol>
    </div>

    <div class="content-section">
        <h2>Examples</h2>
        <div class="code-example">
            <p><strong>Printing strings and characters:</strong></p>
            <pre><code>_printf("Hello, %s!\n", "world");
// Output: Hello, world!</code></pre>
        </div>

        <div class="code-example">
            <p><strong>Printing integers:</strong></p>
            <pre><code>_printf("There are %d days in a week.\n", 7);
// Output: There are 7 days in a week.</code></pre>
        </div>

        <div class="code-example">
            <p><strong>Printing a literal %:</strong></p>
            <pre><code>_printf("Discount: 50%% off!\n");
// Output: Discount: 50% off!</code></pre>
        </div>
    </div>

    <div class="content-section">
        <h2>Installation</h2>
        <ol>
            <li>Clone the repository:</li>
            <pre><code>git clone &lt;REPOSITORY_URL&gt;</code></pre>
            <li>Compile the project using <code>gcc</code>:</li>
            <pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf</code></pre>
            <li>Run the executable:</li>
            <pre><code>./printf</code></pre>
            <li>Test with an example:</li>
            <pre><code>#include "main.h"
int main(void)
{
    _printf("Hello, %s! %d days left.\n", "world", 5);
    return (0);
}</code></pre>
            <pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test
./test</code></pre>
        </ol>
    </div>

    <div class="content-section">
        <h2>Limitations</h2>
        <ul>
            <li>Does not support advanced format specifiers like <code>%f</code>, <code>%x</code>, or <code>%p</code>.</li>
            <li>This project uses a simplified implementation and lacks some optimizations of the standard <code>printf</code>.</li>
        </ul>
    </div>

    <div class="content-section">
        <h2>Files</h2>
        <table class="files-table">
            <thead>
                <tr>
                    <th>File</th>
                    <th>Description</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><code>main.h</code></td>
                    <td>Contains prototypes and structure definitions.</td>
                </tr>
                <tr>
                    <td><code>_printf.c</code></td>
                    <td>Main implementation of <code>_printf</code>.</td>
                </tr>
                <tr>
                    <td><code>_putchar.c</code></td>
                    <td>Function to write a single character to stdout.</td>
                </tr>
                <tr>
                    <td><code>specifiers.c</code></td>
                    <td>Handles format specifiers and their functions.</td>
                </tr>
            </tbody>
        </table>
    </div>

    <div class="content-section authors">
        <h2>Authors</h2>
        <p>This project was created by your team as part of an educational exercise. Feel free to add specific team member names here if needed.</p>
    </div>

</body>
</html>
