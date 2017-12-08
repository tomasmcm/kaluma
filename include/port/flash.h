/* Copyright (c) 2017 Kameleon
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __FLASH_H
#define __FLASH_H

#include <stdint.h>

/**
 * Erase all the data in the flash and set the data size to zero
 */
void flash_clear();

/**
 * Return total size of flash
 */
uint32_t flash_size();

/**
 * Return a pointer to the data stored in the flash
 */
uint8_t *flash_get_data();

/**
 * Return the size of the data stored in the flash
 */
uint32_t flash_get_data_size();

/**
 * Begin to write data to the flash
 */
void flash_write_begin();

/**
 * Write data to the flash and return checksum
 */
uint8_t flash_write(uint8_t buf[], uint32_t size);

/**
 * Finish to write data to the flash
 */
void flash_write_end();

#endif /* __FLASH_H */