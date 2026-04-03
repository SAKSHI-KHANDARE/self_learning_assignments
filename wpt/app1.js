import express from "express";
import fs from "fs";

const app = express();
app.use(express.json());

const FILE = "./product.json";

// Read data
const readData = () => {
  const data = fs.readFileSync(FILE);
  return JSON.parse(data);
};

// Write data
const writeData = (data) => {
  fs.writeFileSync(FILE, JSON.stringify(data, null, 2));
};


// ✅ GET / → all products
app.get("/", (req, res) => {
  const products = readData();
  res.json(products);
});


// ✅ GET /:id → product by id
app.get("/:id", (req, res) => {
  const products = readData();
  const id = parseInt(req.params.id);

  const product = products.find(p => p.prodid === id);

  if (!product) {
    return res.status(404).send("Product not found");
  }

  res.json(product);
});


// ✅ POST /add → using query params
app.post("/add", (req, res) => {
  const products = readData();

  const { prodid, ProductName, price } = req.query;

  const newProduct = {
    prodid: parseInt(prodid),
    ProductName,
    price: parseInt(price)
  };

  products.push(newProduct);
  writeData(products);

  res.send("Product added using params");
});


// ✅ POST /insert → using body
app.post("/insert", (req, res) => {
  const products = readData();

  const newProduct = req.body;

  products.push(newProduct);
  writeData(products);

  res.send("Product added using body");
});


// ✅ DELETE /:id → delete product
app.delete("/:id", (req, res) => {
  const id = parseInt(req.params.id);

  let products = readData();
  const newProducts = products.filter(p => p.prodid !== id);

  if (products.length === newProducts.length) {
    return res.status(404).send("Product not found");
  }

  writeData(newProducts);

  res.send("Product deleted");
});


// Start server
app.listen(3000, () => {
  console.log("Server running on http://localhost:3000");
});