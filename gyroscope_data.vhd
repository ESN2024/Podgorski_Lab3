library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


Entity gyroscope_data is port( 

	communication_mode : out std_logic;

	clk : in std_logic;
	Aff_7segs_1			  : out std_logic_vector(7 downto 0);
	SCL : inout std_logic                    := 'X'; -- scl_pad_io
   SDA : inout std_logic                    := 'X';
	reset : in std_logic );

End entity gyroscope_data;


architecture arch of gyroscope_data is

signal BCD_1 : std_logic_vector(3 downto 0);


    component gyroscope_data_sys is
        port (
            clk_clk               : in    std_logic                    := 'X'; -- clk
            pio_digit_1_export    : out   std_logic_vector(3 downto 0);        -- export
            reset_reset_n         : in    std_logic                    := 'X'; -- reset_n
            i2c_bwabwa_scl_pad_io : inout std_logic                    := 'X'; -- scl_pad_io
            i2c_bwabwa_sda_pad_io : inout std_logic                    := 'X'  -- sda_pad_io
        );
    end component gyroscope_data_sys;
	 
	 component BCD_2_7SEG is
		port(
            inp : in std_logic_vector(3 downto 0); -- input 
            outp : out std_logic_vector(7 downto 0) -- output 
        );
	 end component BCD_2_7SEG;
	 
	 begin
	 
	 communication_mode <= '1';
	 
    u0 : component gyroscope_data_sys
        port map (
            clk_clk               => clk,               --         clk.clk
            pio_digit_1_export    => BCD_1,    -- pio_digit_1.export
            reset_reset_n         => reset,         --       reset.reset_n
            i2c_bwabwa_scl_pad_io => SCL, --  i2c_bwabwa.scl_pad_io
            i2c_bwabwa_sda_pad_io => SDA  --            .sda_pad_io
        );
	
	 u1 : component BCD_2_7SEG
        port map (
            inp     => BCD_1,               
            outp    => Aff_7segs_1   
        );


end arch;












