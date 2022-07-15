const rp2_native = process.binding(process.binding.cyw43arch);

const CYW43ARCH_WL_GPIO_LED_PIN = 0

function gpioPut(pin, value) {
  rp2_native.gpioPut(pin, value);
}

exports.CYW43ARCH_WL_GPIO_LED_PIN = CYW43ARCH_WL_GPIO_LED_PIN;
exports.gpioPut = gpioPut;
