/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDEncryptedReader.h>

@interface OCBReader : OCDEncryptedReader {

	OcBinaryReader* mBinaryReader;
	_sFILE* mFile;

}

@property (assign,nonatomic) OcBinaryReader* binaryReader; 
@property (assign,nonatomic) _sFILE* file; 
@property (nonatomic,readonly) OCCEncryptionInfoReader* encryptionInfoReader; 
-(void)closeFile;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(id)read;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey*)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(id)allocDecryptorWithCryptoKey:(OCCCryptoKey*)arg1 baseOutputFilename:(id)arg2 ;
-(OcBinaryReader*)binaryReader;
-(void)setBinaryReader:(OcBinaryReader*)arg1 ;
-(void)setFile:(_sFILE*)arg1 ;
-(_sFILE*)file;
-(void)restartReaderToUseDecryptedDocument;
-(void)dealloc;
-(BOOL)start;
@end

