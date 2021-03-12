import java.awt.*;
 import java.awt.geom.Ellipse2D;
 import javax.swing.*;

 public class tugas extends JPanel {

public void segitiga(Graphics g) {
 Graphics2D se3 = (Graphics2D) g;
 int x[] = {50, 150, 250};
 int y[] = {250, 50, 250};
 se3.setColor(Color.green);
 se3.fill(new Polygon(x, y, x.length));
 }

public void kotak(Graphics g) {
 Graphics2D kot = (Graphics2D) g;
 int x = 500, y = 100;
 int p = 100, l = 100;
 kot.setColor(Color.yellow);
 kot.fill(new Rectangle(x, y, p, l));
 }

public void poligon(Graphics g) {
 Graphics2D g2d = (Graphics2D) g;
 Polygon pol;
 int x[] = {375, 400, 450, 475, 450, 400};
 int y[] = {150, 100, 100, 150, 200, 200};
 pol = new Polygon(x, y, x.length);
 g2d.setPaint(Color.red);
 g2d.fill(pol);
 }