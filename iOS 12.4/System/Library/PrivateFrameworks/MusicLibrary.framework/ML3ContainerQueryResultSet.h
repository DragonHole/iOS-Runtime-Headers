/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3QueryResultSet.h>

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {

	BOOL _needsSorting;
	BOOL _needsReversing;
	ML3QueryResultSet_BackingStore* _sortedBackingStore;
	long long _containerPID;
	unsigned long long _entityLimit;

}
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_loadCurrentFullResults;
-(id)sortedBackingStoreForDisplayOrdering;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)entityLimit;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

