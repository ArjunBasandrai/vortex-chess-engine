from kaggle_environments import make
env = make("chess", debug=True)

result = env.run(["random", "random"])

print()