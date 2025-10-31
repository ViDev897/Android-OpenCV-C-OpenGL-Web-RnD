const img = document.getElementById("frame") as HTMLImageElement;
const stats = document.getElementById("stats")!;

img.onload = () => {
  stats.textContent = `Frame loaded successfully at ${new Date().toLocaleTimeString()}`;
};
