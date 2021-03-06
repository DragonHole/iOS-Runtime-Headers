/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUZipArchiveDataRepresentation;
#import <Memories/Memories-Structs.h>
@class NSMutableDictionary, SFUDataRepresentation, NSData, NSString, SFUCryptoKey;

@interface SFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	SFUDataRepresentation*<SFUZipArchiveDataRepresentation> mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	SFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(BOOL)isZipArchiveAtPath:(id)arg1 ;
-(id)passphraseHint;
-(BOOL)isEncrypted;
-(void)readEntries;
-(id)entryWithName:(id)arg1 ;
-(id)allEntryNames;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(id)passphraseVerifier;
-(id)encryptedDocumentUuid;
-(SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
-(void)setCryptoKey:(id)arg1 ;
-(void)collapseCommonRootDirectory;
-(void)dealloc;
@end

