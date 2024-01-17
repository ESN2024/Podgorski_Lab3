	component gyroscope_data_sys is
		port (
			clk_clk               : in    std_logic                    := 'X'; -- clk
			pio_digit_1_export    : out   std_logic_vector(3 downto 0);        -- export
			reset_reset_n         : in    std_logic                    := 'X'; -- reset_n
			i2c_bwabwa_scl_pad_io : inout std_logic                    := 'X'; -- scl_pad_io
			i2c_bwabwa_sda_pad_io : inout std_logic                    := 'X'  -- sda_pad_io
		);
	end component gyroscope_data_sys;

	u0 : component gyroscope_data_sys
		port map (
			clk_clk               => CONNECTED_TO_clk_clk,               --         clk.clk
			pio_digit_1_export    => CONNECTED_TO_pio_digit_1_export,    -- pio_digit_1.export
			reset_reset_n         => CONNECTED_TO_reset_reset_n,         --       reset.reset_n
			i2c_bwabwa_scl_pad_io => CONNECTED_TO_i2c_bwabwa_scl_pad_io, --  i2c_bwabwa.scl_pad_io
			i2c_bwabwa_sda_pad_io => CONNECTED_TO_i2c_bwabwa_sda_pad_io  --            .sda_pad_io
		);

