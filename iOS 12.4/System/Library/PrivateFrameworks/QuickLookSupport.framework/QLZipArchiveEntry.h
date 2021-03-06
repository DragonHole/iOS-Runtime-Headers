/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class NSData, NSError, QLZipArchive, NSURL;

@interface QLZipArchiveEntry : NSObject {

	archive_entryRef _entry;
	NSData* _data;
	NSError* _error;
	QLZipArchive* _archive;
	NSURL* _url;

}

@property (assign) archive_entryRef entry;              //@synthesize entry=_entry - In the implementation block
@property (__weak) QLZipArchive * archive;              //@synthesize archive=_archive - In the implementation block
@property (nonatomic,retain) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (retain) NSData * data;                       //@synthesize data=_data - In the implementation block
-(void)setArchive:(QLZipArchive *)arg1 ;
-(QLZipArchive *)archive;
-(id)readDataWithError:(id*)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(archive_entryRef)entry;
-(void)setEntry:(archive_entryRef)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

