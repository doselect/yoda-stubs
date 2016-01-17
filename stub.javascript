// Javascript program to read an integer from STDIN and output it to STDOUT

// Read the variable from STDIN
process.stdin.on('data', function(chunk) {
    var lines = chunk.toString().split('\n'),
    a = parseInt(lines[0])
    // Output the variable to STDOUT
    console.log(a)
})

