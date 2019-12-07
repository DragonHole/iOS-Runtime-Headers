/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSData, NSError;

@interface _HKZipArchiveExtractor : NSObject {

	NSString* _pathname;
	NSData* _archiveData;
	archiveRef _archive;
	archive_entryRef _entry;
	BOOL _dataRead;
	NSData* _data;
	NSError* _lastError;
	BOOL _hasCalculatedNumberOfEntries;
	unsigned long long _numberOfEntries;

}
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)lastError;
-(void)_clearState;
-(unsigned long long)numberOfEntries;
-(void)_logError:(id)arg1 ;
-(id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_enumerateLinesInCurrentEntryWithBlock:(/*^block*/id)arg1 ;
-(id)initWithPathname:(id)arg1 ;
-(id)getDataForCurrentEntry;
-(BOOL)enumerateLinesInCurrentEntryWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end
