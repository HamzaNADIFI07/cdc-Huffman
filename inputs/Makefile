all:
	../huffman -c $(PWD)/fichiers_exp/archive_tar.tar $(PWD)/encode/archive_tar.huf
	../huffman -d $(PWD)/encode/archive_tar.huf $(PWD)/decode/archive_tar.tar

	../huffman -c $(PWD)/fichiers_exp/archive_zip.zip $(PWD)/encode/archive_zip.huf
	../huffman -d $(PWD)/encode/archive_zip.huf $(PWD)/decode/archive_zip.zip

	../huffman -c $(PWD)/fichiers_exp/archive_zip2.zip $(PWD)/encode/archive_zip2.huf
	../huffman -d $(PWD)/encode/archive_zip2.huf $(PWD)/decode/archive_zip2.zip

	../huffman -c $(PWD)/fichiers_exp/image1.jpg $(PWD)/encode/image1.huf
	../huffman -d $(PWD)/encode/image1.huf $(PWD)/decode/image1.jpg

	../huffman -c $(PWD)/fichiers_exp/image2.png $(PWD)/encode/image2.huf
	../huffman -d $(PWD)/encode/image2.huf $(PWD)/decode/image2.png

	../huffman -c $(PWD)/fichiers_exp/image3.bmp $(PWD)/encode/image3.huf
	../huffman -d $(PWD)/encode/image3.huf $(PWD)/decode/image3.bmp

	../huffman -c $(PWD)/fichiers_exp/audio1.mp3 $(PWD)/encode/audio1.huf
	../huffman -d $(PWD)/encode/audio1.huf $(PWD)/decode/audio1.mp3

	../huffman -c $(PWD)/fichiers_exp/audio2.ogg $(PWD)/encode/audio2.huf
	../huffman -d $(PWD)/encode/audio2.huf $(PWD)/decode/audio2.ogg

	../huffman -c $(PWD)/fichiers_exp/audio3.wav $(PWD)/encode/audio3.huf
	../huffman -d $(PWD)/encode/audio3.huf $(PWD)/decode/audio3.wav

compare_size:

	@echo "\n--- Comparaison des tailles (original vs compressé) ---"

	@stat -f "%z %N" fichiers_exp/archive_tar.tar encode/archive_tar.huf
	@stat -f "%z %N" fichiers_exp/archive_zip.zip encode/archive_zip.huf
	@stat -f "%z %N" fichiers_exp/archive_zip2.zip encode/archive_zip2.huf
	@stat -f "%z %N" fichiers_exp/image1.jpg encode/image1.huf
	@stat -f "%z %N" fichiers_exp/image2.png encode/image2.huf
	@stat -f "%z %N" fichiers_exp/image3.bmp encode/image3.huf
	@stat -f "%z %N" fichiers_exp/audio1.mp3 encode/audio1.huf
	@stat -f "%z %N" fichiers_exp/audio2.ogg encode/audio2.huf
	@stat -f "%z %N" fichiers_exp/audio3.wav encode/audio3.huf


clean:
	rm -rf $(PWD)/decode/* $(PWD)/encode/*
