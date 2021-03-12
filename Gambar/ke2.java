public void linkaran(Graphics g) {
 Graphics2D ling = (Graphics2D) g;
 Ellipse2D lingkaran;
 double x = 250, y = 100;
 double diameter = 80;
 lingkaran = new Ellipse2D.Double(x, y, diameter, diameter);
 ling.setColor(Color.blue);
 ling.fill(lingkaran);
 }

public void garis(Graphics g) {
 Graphics2D g2d = (Graphics2D) g;
 g2d.drawLine(50, 50, 100, 50);
 }

public void titik(Graphics g) {
 Graphics2D t2k = (Graphics2D) g;
 t2k.drawLine(30,30,30,30);
 }

public void paintComponent(Graphics g) {
 clear(g);
 segitiga(g);
 kotak(g);
 poligon(g);
 garis(g);
 linkaran(g);
 titik(g);

}

protected void clear(Graphics g) {
 super.paintComponent(g);
 }

public static void main(String[] args) {
 tugas1 panelGambar = new tugas1();
 JFrame fr = new JFrame();
 fr.setSize(650,350);
 fr.getContentPane().add(panelGambar);
 fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 fr.setVisible(true);
 }
 }