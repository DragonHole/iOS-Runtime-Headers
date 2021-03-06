/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(BOOL)verifyPassphrase:(id)arg1 ;
-(void)deleteOutputFile;
-(BOOL)decryptIntoOutputFile;
-(BOOL)decrypt;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(NSString *)outputFilename;
-(void)dealloc;
@end

