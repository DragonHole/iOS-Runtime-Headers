/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSURL, NSFileHandle;

@interface _HKArchiveCreator : NSObject {

	archiveRef _archive;
	NSURL* _archiveURL;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;                //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3 ;
-(long long)writeData:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(/*^block*/id)arg3 ;
-(NSURL *)archiveURL;
-(void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)closeArchive;
-(id)initWithURL:(id)arg1 archiveType:(long long)arg2 ;
-(NSFileHandle *)fileHandle;
-(BOOL)archiveIsValid;
-(id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2 ;
-(void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)dealloc;
@end

