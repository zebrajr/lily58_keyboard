#!/bin/bash

# Set environment
export ZEPHYR_BASE=${ZEPHYR_BASE}
export WEST_PYTHON=${WEST_PYTHON}

# Board configurations
BOARD_LEFT="nice_nano_v2"
BOARD_RIGHT="nice_nano_v2"
SHIELD_LEFT="lily58_left nice_view_adapter nice_view"
SHIELD_RIGHT="lily58_right nice_view_adapter nice_view"

# Configure Git safety
git config --global --add safe.directory /workspaces/zmk

# Initialize west workspace if needed
if [ ! -f "/workspaces/zmk/.west/config" ]; then
    echo "Initializing west workspace..."
    west init -l /workspaces/zmk/app
    west update
fi

# Export Zephyr environment
west zephyr-export

# Build process
echo "Building left side..."
west build -p always -d build/left -b ${BOARD_LEFT} -- \
    -DSHIELD="${SHIELD_LEFT}" \
    -DZMK_CONFIG="/workspaces/zmk-config/config" \
    -DZMK_EXTRA_MODULES="/workspaces/zmk-modules/zmk-locales"

echo "Building right side..."
west build -p always -d build/right -b ${BOARD_RIGHT} -- \
    -DSHIELD="${SHIELD_RIGHT}" \
    -DZMK_CONFIG="/workspaces/zmk-config/config" \
    -DZMK_EXTRA_MODULES="/workspaces/zmk-modules/zmk-locales"

# Copy artifacts
echo "Copying firmware files..."
mkdir -p build_output
cp build/left/zephyr/zmk.uf2 /workspaces/zmk/build_output/left.uf2 || echo "Left build failed"
cp build/right/zephyr/zmk.uf2 /workspaces/zmk/build_output/right.uf2 || echo "Right build failed"

echo "Build complete! Check build_output/ for firmware files"
