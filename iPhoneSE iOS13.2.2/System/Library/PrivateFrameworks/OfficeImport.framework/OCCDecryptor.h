/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUTemporaryDirectory, NSString;

@interface OCCDecryptor : NSObject {

	OITSUTemporaryDirectory* mTempDirectory;
	NSString* mOutputFilename;
	NSString* mBaseStringForOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)allocTempFileWithBase:(id)arg1 outFilename:(id*)arg2 tempDirectory:(id*)arg3 ;
+(id)agileDescriptorNamespace;
+(id)agilePasswordKeyEncryptorNamespace;
-(void)dealloc;
-(NSString *)outputFilename;
-(BOOL)decrypt;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(BOOL)verifyPassphrase:(id)arg1 ;
-(void)deleteOutputFile;
-(BOOL)decryptIntoOutputFile;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
@end
