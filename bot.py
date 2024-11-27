import subprocess

engine_path = "elixir.exe"

process = subprocess.Popen(
    engine_path,
    stdin=subprocess.PIPE,
    stdout=subprocess.PIPE,
    stderr=subprocess.PIPE,
    text=True
)

def send_uci_command(command):
    process.stdin.write(command + "\n")
    process.stdin.flush()
    response = process.stdout.readline()
    return response

send_uci_command("uci")
send_uci_command("isready")

send_uci_command("position startpos")
send_uci_command("go depth 14")

while True:
    line = process.stdout.readline()
    if line.startswith("bestmove"):
        print(f"Best move: {line.strip()}")
        break

process.stdin.write("quit\n")
process.stdin.flush()
process.wait()
